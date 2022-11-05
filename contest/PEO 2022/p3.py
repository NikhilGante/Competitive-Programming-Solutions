def quadratic(a, b, c, x):
  return a*x*x + x*b + c

a = float(input())
b = float(input())
c = float(input())
step_size = float(input())
# step_size = 0.001
y = quadratic(a, b, c, -26)
x = 0
i = -25
while i <= 26:
  output = quadratic(a, b, c, i)
  # print(f"{i}, {output}")
  if a > 0:
    if output < y:
      x = i
      y = output
  elif output > y:
    x = i
    y = output
  i += step_size
  
print(round(x, 4), round(y, 4))
