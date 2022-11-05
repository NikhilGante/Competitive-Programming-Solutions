def fn(x, inc):
  return (800+inc*x)*(60-x)

inc = int(input())
profit = 0
max_profit = 0
x = 0
for i in range(0, 61):
  profit = fn(i , inc)
  if profit > max_profit:
    max_profit = profit
    x = i
    sell_price = 800 + x*inc

print(max_profit, x, sell_price)