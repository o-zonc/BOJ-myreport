size = int(input())

arr = input().split(" ")

for i in range(len(arr)):
    arr[i] = int(arr[i])

arr.sort()

greedy = 0

for j in range(size):
    for k in range(j+1):
        greedy += arr[k]

print(greedy)