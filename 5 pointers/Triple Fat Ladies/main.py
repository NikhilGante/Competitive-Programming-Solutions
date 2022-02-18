# through experimentation it was discovered that 192 + 250n ends in 888

t = int(input())

for i in range(t):
    k = int(input())
    print((((k - 192) // 250)+1) * 250 + 192)
