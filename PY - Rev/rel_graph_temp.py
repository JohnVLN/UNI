import csv
import statistics
from datetime import date
from datetime import datetime, timedelta
import matplotlib as plt
import matplotlib.pyplot as plt

a = open('coleta.csv', 'r')

# lista para os valores do csv
temperaturas = []
read_a = a.readlines()

# lê todos os valores e os coloca em temp[]
with open('coleta.csv', mode = 'r', encoding='utf-8') as arq1:
    la = csv.reader(arq1, delimiter = ' ')
    lin_a = 1
    while lin_a < len(read_a):
        # remove caracteres indesejaveis que não deveriam existir em primeiro lugar.
        read_a[lin_a] = read_a[lin_a].replace('â€‚', ' ')
        temperaturas.append(int(read_a[lin_a][6:]))
        lin_a += 1
        
med = statistics.mean(temperaturas)
baixa = min(temperaturas)
alta = max(temperaturas)

# checando se todos os valores estão corretos
print('Lista = ', temperaturas)
print(f'{med:.2f}')
print(baixa)
print(alta)

# criação do .dat e lista de informações
f = open("real_temp.dat", "w")
data = [('#------------------------------------#'), 
        ('Relatório de Análise de Temperaturas'), 
        ('\n Por: Jonathan Vieira Llanos'),
        (f' Data: {date.today()}'), 
        (f'\n Temperatura média: {med:.2f}°c'), 
        (f' Temperatura mais alta: {alta}°c'), 
        (f' Temperatura mais baixa: {baixa}°c'), 
       (f'#------------------------------------#')]

# escreve cada elemento de data[] no .dat
for item in data:
    f.write(item)
    f.write('\n')
f.close()

start_time = datetime.strptime('00:00', '%H:%M')
time_increment = timedelta(minutes=10)
timestamp = []

for i in range(len(temperaturas)):
    timestamp.append(start_time.strftime('%H:%M'))
    start_time += time_increment
print(timestamp)

# gráfico com as informações
fig, ax = plt.subplots()

ax.plot(timestamp, temperaturas)
plt.xticks(rotation=90)

make_invisible = True
l = 1
for item in range(len(temperaturas)):
    if make_invisible:
        xticks = ax.xaxis.get_major_ticks()
        try:
            xticks[l].label1.set_visible(False)
        except IndexError:
            break
    l += 2

ax.set_xlabel('Horario')
ax.set_ylabel('Temperatura (°c)')
ax.set_title('Temperatura por horário (00:00 a 12:00)')