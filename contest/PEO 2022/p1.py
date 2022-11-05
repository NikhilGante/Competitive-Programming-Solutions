x = int(input())
count = 0
for i in range(2, x + 1):
  found = True
  for j in range(2, i // 2 + 1):
    if(i % j == 0):
      found = False
      break
  if found:
    count += 1
print(count)
