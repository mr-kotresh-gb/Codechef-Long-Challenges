'''
Question link ->    https://www.codechef.com/DEC20B/problems/POSPREFS
Code By       ->    Kotresh G B
Date          ->    06/12/2020
'''

t = int(input())
for _ in range(t):
    N, K = list(map(int, input().split()))
    j = 1
    arr = [-(i + 1) for i in range(N)]
    arr[0] = 1
    for i in range(1, N):
        if j < K and sum(arr[:i]) < 0:
            j += 1
            arr[i] = -(arr[i])
    b = N - K
    j = 0
    for i in range(N):
        if j < b and arr[i] < 0:
            j += 1
        elif arr[i] < 0:
            arr[i] = -(arr[i])
        else:
            pass
    
    print(*arr)
