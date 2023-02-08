k = int(input())
k_arr = list(map(int, input().split()))
n = int(input())
n_arr = list(map(int, input().split()))

k_arr.sort()
for i in n_arr:
  l = 0
  r = len(k_arr) - 1
  while r > l:
    mid = (l + r) // 2
    if k_arr[mid] == i:
      print("ans", i, mid, i - mid)
      break

    elif l > r:
      l = mid + 1
    else:
      r = mid -1
  
print("")