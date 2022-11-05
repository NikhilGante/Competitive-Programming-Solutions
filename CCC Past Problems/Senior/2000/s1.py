quarters = int(input())
a_played = int(input())
b_played = int(input())
c_played = int(input())

times_played = 0
while True:
  if a_played == 35:
    quarters += 30
    a_played = -1
  times_played += 1  
  a_played += 1
  quarters -= 1
  if quarters <= 0:
    break;

  if b_played == 100:
    quarters += 0
    b_played = -1
  times_played += 1  
  b_played += 1
  quarters -= 1
  if quarters <= 0:
    break;

  if c_played == 10:
    quarters += 9
    c_played = -1
  times_played += 1  
  c_played += 1
  quarters -= 1
  if quarters <= 0:
    break;


print(f"Martha plays {times_played} times before going broke.")
# 48
# 3
# 10
# 4