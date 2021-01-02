# Question link ->    https://www.codechef.com/DEC20B/problems/DECODEIT
# Code By       ->    Kotresh G B
# Date          ->    01/01/2021

d=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p']
t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    string = ''
    for j in range(0, n - 3, 4):
        string += d[int(s[j : j + 4], 2)]
    print(string)
