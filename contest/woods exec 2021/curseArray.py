n = int(input())

nums = set(map(int,input().split()))
ans = 0
for i in nums:
  if i:
    ans += 1  

print(ans)