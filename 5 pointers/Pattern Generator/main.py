import sys
input = sys.stdin.readline
amount = int(input())
for i in range(amount):
    n, k = map(int, input().split())
    print("The bit patterns are")
    runs = 2**n
    for i in range(runs):
        x = bin(runs - i - 1)[2:]
        if x.count('1') == k:
            x = '0' * (n - len(x)) + x
            print(x)


    

