#!/usr/bin/env python
# coding: utf-8

# In[2]:


import pyodbc

# Estabelecendo a conexão com a db
conn = pyodbc.connect('Driver={SQL Server};'
'Server=SPSTAESL0303\SQLEXPRESS;'
'Database=Faculdade;'
'Trusted_Connection=yes;')

# Condição de loop
i = 0

# Menu em loop enquanto o usuário estiver utilizando o programa
while i == 0:
    print("Menu\n\n")
    print("1. Consulta Prof")
    print("2. Consulta Dep")
    print("3. Cadastra Prof")
    print("4. Exit...")

    # Cria cursor e a integer choice
    cursor = conn.cursor()
    choice = int(input(">> "))
    
    # Consulta Pofessor
    if choice == 1:
        cod_p = int(input("Insira o código do professor: "))
        cursor.execute('SELECT * FROM professor WHERE Cod_Professor={cod_p}')
        for l in cursor:
            print(l)
    # Consulta Departamento
    elif choice == 2:
        dep = int(input("Insira o código de departamento: "))
        cursor.execute('SELECT * FROM departamento WHERE Cod_Departamento={cod_d}')
        for l in cursor:
            print(l)
    # Cadastro Professor
    elif choice == 3:
        nom = input("Nome do professor a ser cadastrado: ")
        sob = input("Sobrenome: ")
        stat = input("Status (True/False): ")
        dep = input("Nome do Departamento: ")
        cursor.execute('INSERT INTO professor(Nome_Professor, Sobrenome_Professor, Status, Cod_Departamento) VALUES ({nom}, {sob}, {stat}, (SELECT Cod_Departamento FROM Departamento WHERE Nome_Departamento={dep}))')  
        #commit insert
        conn.commit()
        print("Professor Cadastrado!")
    #Exit programm
    elif choice == 4:
        i = choice
    else:
        print("Escolha uma opção válida...")

cursor.close()
conn.close()

