a,b,c,d = map(int,input().split())
r = a*c
r = max(r,a*d)
r=  max(r,b*c)
r = max(r,b*d)
print(r)
