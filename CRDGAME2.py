import math

def power(x,n):
     res = 1
     x = x%1000000007
     while(n>0):
          if(n&1):
               res = (res*x)%1000000007
          n //=2
          x = (x*x)%1000000007
     return res


def inverse(n):
     return power(n,1000000007-2)

def fermet(n,r):
     if r==0:
          return 1
     fact = [0 for i in range(n+1)]
     fact[0] = 1
     for i in range(1,n+1):
          fact[i] = (fact[i-1]*i)%1000000007
     return (fact[n]* inverse(fact[r])%1000000007 * inverse(fact[n-r])%1000000007)%1000000007

for _ in range(int(input())):
     n = int(input())
     a = list(map(int,input().split()))
     maxx = -1
     mp = dict()
     for i in a:
          if i not in mp:
               mp[i] = 1
          else:
               mp[i] +=1
          maxx = max(maxx,i)
     f = mp[maxx]
     l = pow(2,n-f)
    
     r = pow(2,f)

     if (f%2==0):
          s = fermet(f,f//2)
          r -=s
     r = r%1000000007
     print(l*r%1000000007)
