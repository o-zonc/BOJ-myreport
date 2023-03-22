fibo = []

fibo.append(0)
fibo.append(1)
print(fibo[1], end=', ')

for i in range(2, 10001):
    fibo.append((fibo[i - 1] + fibo[i - 2]) % 9099099909999099999)
    print(fibo[i], end=', ')

print('0.')

a = 12200160415121876738 - 3101060505122776739
print(a)
print(a // 9)
print(a // 81)
print(a // 405)
print(a // 3645)

b = 12200160415121876738 % 2496323706446941
print(b)

c = 12200160415121876738 % 9099099909999099999
print(c)