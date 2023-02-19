dp = [0 for _ in range(41)]

dp[0] = 0
dp[1] = 1
dp[2] = 1

for i in range(3,41):
    dp[i] = dp[i - 1] + dp[i - 2]

t = int(input())

for i in range(t):
    n = int(input())

    if n == 0:
        print("0 1\n")
    elif n == 1:
        print("1 0\n")
    else:
        print(f"{dp[n - 1]} {dp[n]}\n")