import sys
input = sys.stdin.readline

n, q = map(int, input().split())
song = input()

# l = [0] * (q + 1)
# r = [0] * (q + 1)
psa = [0] * (n + 1)

def find_len(string):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    count = 0
    for letter in range(n):
        count += alphabet.find(song[letter]) + 1
        psa[letter + 1] = count
find_len(song)
# print("psa", psa)

for i in range(q):
    l, r = map(int, input().split())
    print(psa[r] - psa[l - 1])
