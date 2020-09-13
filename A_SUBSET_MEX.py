for _ in range(int(input())):
    n = int(input())
    s = list(map(int,input().split()))
    a,b = set(),set()
    for i in s:
        if i in a:
            b.add(i)
        else:
            a.add(i)
    mexa = 0
    for i in range(n+1):
        if i not in a:
            mexa = i
            break
    mexb = 0
    for i in range(n+1):
        if i not in b:
            mexb = i
            break
    
    print(mexa+mexb)

