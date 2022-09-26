n = int(input())
for _ in range(n):
  arr = input().split()
  if arr[0][-2:] == "'s":
    print("Set")
  elif arr[0] == "Damaged":
    print("Normal")
  elif len(arr) > 2 and len(arr) <= 4 and arr[-2] == "of":
    print("Magic") 
  elif len(arr) == 2:
    print("Not sure, take anyways")
  else:
    print("Normal")
