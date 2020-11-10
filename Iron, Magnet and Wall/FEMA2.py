# This solution exceeds the time limit. So try this in cpp! 
# problem link -> https://www.codechef.com/NOV20B/problems/FEMA2

for i in range(int(input())):
    n,k = map(int,input().split())
    s = input()
    mg = 0
    d = 0
    l = []
    q = []
    for i in range(n):
        if s[i] == "M" :
            for j in range(n):
                if s[j] == "I":
                    if "X" not in s[min(i,j):max(i,j)]:
                        if i not in l and j not in q:
                            p = k+1-abs(i-j)-s[min(i,j):max(i,j)].count(":")
                            if p>0:
                                d = d+1
                                l.append(i)
                                q.append(j)
                                break
                            elif j>i:
                                break

    print(d)
