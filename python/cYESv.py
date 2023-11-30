import csv
with open('/home/vorsv/code/python/csv.csv', 'r',) as file:
    reader = csv.reader(file, delimiter = '\t')
    for row in reader:
        print(row)
