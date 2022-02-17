import sys
input = sys.stdin.readline

t = int(input())

for i in range(t):
    a, b = map(int, input().split())
    m = (a + b) // 4
    print(min(min(a, b), m))



# for i in range(t):
#     count = 0
#     while True:
#         if a > b:
#             sub = max((a - b) // 2, 1)
#             if b - sub < 0:
#                 count += b
#                 break
#             count += sub
#             a -= sub * 3
#             b -= sub
#         elif a < b:
#             sub = max((b - a) // 2, 1)
#             if a - sub < 0:
#                 count += a
#                 break
#             count += sub
#             a -= sub
#             b -= sub * 3
#         else:
#             count += a // 2
#             break
#         if a + b < 4:
#             break
#     print(count)
        