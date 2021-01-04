
for t in range(int(input())):

    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    i = 0
    possible = True
    a.sort()
    b.sort()
    while sum(a) <= sum(b):

        if a[i] < b[-1-i]:
            temp = b[-1-i]
            b[-1-i] = a[i]
            a[i] = temp

            i += 1
        else:
            possible = False
            break
    if possible == True:
        print(i)
    else:
        print(-1)
