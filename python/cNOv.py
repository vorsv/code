new = open('/home/vorsv/code/python/csv.csv',"r")
i=0
s=[]
for l in new:
    s.append((l.strip('\n')).split(','))
x=len(s)
y=len(s[0])

print (s,x,y)
for p in range (0,x):
    for q in range (0,y):
        print(s[p][q],end=" ")
    print ('\n')