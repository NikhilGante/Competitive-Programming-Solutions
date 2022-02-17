n = int(input())
h = list(map(int, (input().split())))

costs = [0] * n
costs[0] = 0
costs[1] = abs(h[1] - h[0])


for i in range(n - 2):
    costs[i + 2] = min(costs[i + 1] + abs(h[i + 2] - h[i + 1]), costs[i] + abs(h[i + 2] - h[i]))

print(costs[n-1])