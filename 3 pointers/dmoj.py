import sys
input = sys.stdin.readline

n = int(input()) # number of trees

psa = [0] * (n + 1)
total = 0
for i in range(n): # constructs psa
    cur = int(input())
    total += cur
    psa[i + 1] = total
q = int(input()) # number of queries
for i in range(q):
    l, r = map(int, input().split())
    print(psa[r+1] - psa[l])
