for t in range(int(input())):

    n, d = map(int, input().split())

    a = list(map(int, input().split()))

    for num in a:
        found = False
        if str(d) in str(num):
            print("YES")
        else:
            while num > 0:
                num = num-d
                if str(d) in str(num):
                    print("YES")
                    found = True
                    break

            if found == False:
                print("NO")
