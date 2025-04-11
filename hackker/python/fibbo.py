n = 6
a, b = 0, 1
for i in range(n):
    print(a, end=" ")
    temp = a
    a = b
    b = temp + b