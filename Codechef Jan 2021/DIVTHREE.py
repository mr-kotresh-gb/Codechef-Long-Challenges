# Question link ->    https://www.codechef.com/DEC20B/problems/DIVTHREE
# Code By       ->    Kotresh G B
# Date          ->    01/01/2021

t = int(input())
for i in range(t):
    n, k, d = map(int, input().split())
    a = list(map(int, input().split()))
    p = sum(a) // k
    print(min(p, d))
