for i in range(3):
    n = int(input())

    ans = 0
    for j in range(n):
        a = int(input())
        ans += a
    
    if ans < 0:
        print("-")
    elif ans > 0:
        print("+")
    else:
        print("0")