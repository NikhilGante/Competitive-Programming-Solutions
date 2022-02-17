import sys
input = sys.stdin.readline

# PROCESSING INPUT ---------------------------------------
x = int(input())
x_list = [('','')] * x

for i in range(x):
  x_list[i] = set(input().split())

 # print("x", x_list)

y = int(input())
y_list = [('','')] * y

for i in range(y):
  y_list[i] = set(input().split())

 # print("y", y_list)

g = int(input())
g_list = [{}] * g

for i in range(g):
  g_list[i] = set(input().split())
 # print("g", g_list)

# ACTUAL CODE ----------------------------------------------

ans = 0
 # print("done Input -----------------")
for i in x_list:
  for j in g_list:
    val = len(i.intersection(j))
    if not (val == 2 or val == 0):
      ans += 1
       # print("count: ", ans, "i", i, "j", j, "RESULT", i.intersection(j), "val", val)
      break

 # print("IN SECOND LOOP-----------")
for i in y_list:
  for j in g_list:
    val = len(i.intersection(j))
    if val == 2:
      ans += 1
       # print("count: ", ans, "i", i, "j", j, "RESULT", i.intersection(j), "val", val)
      break    

print(ans)
 # print("ANSWER IS", ans)