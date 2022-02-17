import sys
input = sys.stdin.readline

n = int(input())
a = ((n) // 20) + 1
b = n - ((a-1) * 20 - 10)
if b == 1 or b == 2 or b == 3 or b == 6 or b == 7 or b == 11 or b == 23 or b == 27 or b == 29:
  b = 1
else:
  b = 0

print(a + b)
