from math import sqrt, ceil
def isPrime(x):
  if x < 2:
    return False
  found = True
  for j in range(2, ceil(sqrt(x)) + 1):
    if(x % j == 0):
      found = False
      break
  return found

for i in range(30):
  if isPrime(i):
    print(i)