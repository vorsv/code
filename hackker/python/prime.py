import math

num = int(input())
for i in range(2, int(math.sqrt(num))):
    if num % i == 0:
        print("False")
        break
else:
    print("True")