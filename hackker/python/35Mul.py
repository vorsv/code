q = 1000000

l3 = (q-1) // 3
l5 = (q-1) // 5
l15 = (q-1) // 15

def sum(n,g):
    return g*((n*(n+1))/2)

def sumMul(n,g):
    c=0
    for i in range(n):
        c+=i*g
    return c

print(str(l3) + ' ' + str(l5) + ' ' + str(sum(l5,5)) + ' ' + str(sum(l3,3)))
print(str(l3) + ' ' + str(l5) + ' ' + str(sumMul(l5,5)) + ' ' + str(sumMul(l3,3)))
print(int(sum(l3,3)+sum(l5,5)-sum(l15,15)))