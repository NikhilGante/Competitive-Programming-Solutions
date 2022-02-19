import sys
input = sys.stdin.readline

n = int(input())  # pieces of pie
k = int(input())  # number of people

def solve(n, k, arr):



solve(n, k, [])
print(ans)


# assigns highest possible number to last element and 1 to remaining elements 
last = n - k + 1 # value of last element
arr = [1] * (n - last) + [last]

ans = 1
exit = False
while(True):
  arr[-1] = last
  leftover = n - arr[-1] # leftover is the amount of pies remaining from all elements left of i
  for i in range(len(arr) - 2, -1, -1):
    arr[i] = leftover - i
    leftover -= arr[i]
    if arr[i] > arr[i + 1]:
      exit = True
      break
  print(arr)
  if exit:
    break
  
  last -= 1
  ans += 1  

print("ANSWER", ans)




