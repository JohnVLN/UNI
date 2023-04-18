import csv

with open('temps.txt', 'r') as in_file:
    stripped = (line.strip() for line in in_file)
    lines = (line.split(" ") for line in stripped if line)
    with open('coleta.csv', 'w', newline = '') as out_file:
        writer = csv.writer(out_file, delimiter = ' ')
        writer.writerows(lines)