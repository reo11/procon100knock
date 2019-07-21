import sys
input = sys.stdin.readline

n, q = map(int, input().split())
s = str(input())
ac = [0] * n
for i in range(1, n):
    ac[i] = ac[i-1]
    if(s[i-1] == "A" and s[i] == "C"):
        ac[i] += 1
for i in range(q):
    l, r = map(int, input().split())
    print(ac[r-1] - ac[l-1])