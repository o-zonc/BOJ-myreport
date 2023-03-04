print("int a;")

n = int(input())

print("int", "*ptr", "= &a;")
if n >= 2:
    print("int", "**ptr2", "= &ptr;")
    for i in range(3, n+1):
        print("int", "*"*i + f"ptr{i}", f"= &ptr{i-1};")
