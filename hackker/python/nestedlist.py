marks = [['f',12],['a',12],['amd',45.6]]

n = 3

# n = int(input())marks = [['f',12],['a',12],['amd',45.6]]
# for _ in range(n):
#     name = input()
#     score = float(input())

#     marks.append([name,score])

marks = sorted(marks, key=lambda x: x[0])
marks = sorted(marks, key=lambda x: x[1])
print(marks)

mark = lambda lst: list({item[1] for item in lst})


groups = {}
for x in marks:
    groups.setdefault(x[1], []).append(x)

print(groups)
print(mark(marks).sort())

for item in groups[mark(marks)[0]]:
    print(item[0])
