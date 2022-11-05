def isPrime(x):
  found = True
  for j in range(2, x // 2 + 1):
    if(x % j == 0):
      found = False
      break
  return found

val = int(input())
min_diff = val
a = 0
b = 0
for i in range(3, val, 2):
  if isPrime(i) and isPrime(val - i):
    # print(i, val - i)

    cur_diff = abs(i - (val -i))
    if(cur_diff < min_diff):
      min_diff = cur_diff
      a = min(val - i, i)
      b = max(val - i, i)
      # print(a, b)



print(f"{a} + {b} = {val}")