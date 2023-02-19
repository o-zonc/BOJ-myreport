a = int(input())
b = int(input())

if a % 2 == 0:
    k = a // 2 + b // 2
    n = a // 2 - b // 2
else:
    k = a // 2 + b // 2 + 1
    n = a // 2 - b // 2
print(f'{k}\n{n}')