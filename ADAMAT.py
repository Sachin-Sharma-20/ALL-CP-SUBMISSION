

for _ in range(int(input())):
     n = int(input())
     a = []
     for i in range(n):
          temp = list(map(int,input().split()))
          a.append(temp)
     cnt = 0
     for k in range(n-1,0,-1):    
          if(a[k][k] != a[k][k-1]+1):
               result = [[a[j][i] for j in range(k+1)] for i in range(k+1)]
               for i in range(len(result)):
                    for j in range(len(result)):
                         a[i][j] = result[i][j]

               cnt+=1
     print(cnt)


