for t in range(int(input())):

    n, m = map(int, input().split())

    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    i = 0
    isPossible = True
    while sum(a) <= sum(b):
        a.sort()
        b.sort()
        if a[0] < b[-1]:
            x = a[0]
            a[0] = b[-1]
            b[-1] = x
            i += 1
        else:
            isPossible = False
            print(-1)
            break
    if isPossible == True:
        print(i)
