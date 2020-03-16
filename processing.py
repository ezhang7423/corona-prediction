import csv
import json
with open('somethingtodo.csv', newline='') as fin:
    dat = csv.reader(fin, delimiter=',')
    x = 0
    obj = {}
    for row in dat:
        try:
            if int(row[-1]) < 20:
                continue
        except ValueError as e:
            print(e)
        if row[0] != '':
            name = row[0] + ' ' + row[1]
        else:
            name = row[1]
        lat = row[2]
        long = row[3]
        infected = row[4:]
        obj[name] = {}
        obj[name]["lat"] = lat
        obj[name]["long"] = long
        obj[name]["data"] = infected
    fmtd = json.dumps(obj)

with open("todo.json", 'w') as fout:
    fout.write(fmtd)
