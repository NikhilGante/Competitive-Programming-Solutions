n = int(input())
val = 2**20
for _ in range(n):
  address = input()
  b10 = int(address, 16) # converts to base 10
  if b10 > val:
    b10 %= val
    num = str(hex(b10)).upper()[2:]
    print("0" * (8 - len(num)) + num, end = '')
  print(" " + address)

