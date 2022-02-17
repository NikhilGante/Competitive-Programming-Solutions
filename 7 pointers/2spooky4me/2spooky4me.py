import sys
input = sys.stdin.readline

n, l, _s = map(int, input().split())

pda = [0] * (l + 1)
arr = [0] * l
for i in range(n):
    a, b, s = map(int, input().split())
    pda[a] += s
    pda[b + 1] -= s

arr[0] = pda[0]
for i in range(1, l):
    arr[i] = pda[i] + arr[i-1]
count = 0

for h in range(l):
    if arr[h] < _s:
        count += 1
print(count)


# 10, 5, 20, 40, 30, 36   # original array
# 10, -5, 15, 20, -10, 6, 0 # original prefix diff array

# #add 7 to 1-4
# 10, 12, 27, 47, 37, 36


# 17, -5, 15, 20, -10, 6, -7  # new prefix diff array
# 17, 12, 27, 47, 37, 6, -7  # transformed array


