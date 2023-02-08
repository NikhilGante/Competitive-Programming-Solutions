t = int(input(""))
for i in range(t):
  n = int(input(""))
  a = list(map(int, list(input(""))))
  srt = sorted(a)

  grp_1 = {}
  grp_2 = {}
  grp_1_sum = 0
  grp_2_sum = 0


  for i in srt:
    if(grp_1_sum < grp_2_sum):
      grp_1[i] = 0
      grp_1_sum += i
    else:
      grp_2[i] = 0
      grp_1_sum += i
  print("groups:", grp_1, grp_2)
  for i in a:
    if i in grp_1.keys():
      print("+", end = '')
      grp_1.pop(i)
    else:
      print("+", end = '')
      grp_2.pop(i)
  print()

    

  print(n, a)
