#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define rep(i,a,b) for(auto i = a;i<b;i++)
#define ll unsigned long long
 
void solve(){
ll x,y,a,b,cnt=0;
cin>>x>>y>>a>>b;
 
while(x<=(b-1)/a and y>x*a)
  { 
    x*=a;
   cnt++;
  }
  
cnt += (y-x-1)/b;
  
cout<<cnt<<endl;
 
  
}
 
 
int main()
{
int T=1;
// cin>>T;
while(T--)
solve();
 
return 0;
}
