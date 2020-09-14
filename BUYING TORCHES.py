
for _ in range(int(input())):
    x,y,k = map(int,input().split())
    total = (y*k+k)
    trade = ((total-1)//(x-1))
    if (total-1)%(x-1)!=0:
        trade+=1
    trade+=k
    print(trade)
