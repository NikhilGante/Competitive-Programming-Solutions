import sys
input = sys.stdin.readline

n,d,k,x = map(int, input().split())
x = (100 - x) / 100
speeds = [0] * n

for i in range(n):
  speeds[i] = int(input())

p = int(input())

count = 0
exit = False
for i in range(n):
  while speeds[i] >= p:
    if count > k:
      exit = True
      break
    speeds[i] *= x
    count += 1
  if exit:
    break
  
if count > k:
  print("NO")
else:
  print("YES")