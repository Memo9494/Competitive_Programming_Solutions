x, y = map(int, input().split())
n = int(input())
n = n%6
if n ==1:
    print(x%1000000007)
    exit()
if n == 2:
    print(y%1000000007)
    exit()
if n == 3:
    print((y-x)%1000000007)
    exit()
if n == 4:
    print(-x%1000000007)
    exit()
if n == 5:
    print(-y%1000000007)
    exit()
if n == 0:
    print((x-y)%1000000007)
    exit()