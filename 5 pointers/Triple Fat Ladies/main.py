# t = int(input())

d = dict()

i = 0
while True:
    a = i
    b = a * a * a
    if a % 10000000 == 0:
        print(a, b)
    if str(i)[::-3] == 888:
        print("YOOOO", a, b)
        d[a] = b
        if b > 100:
            break

    i += 1

print(d)
# for i in range(t):
#     k = int(input())


