#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define rep(i,a,b) for(auto i = a;i<b;i++)
#define ll long long
 
void solve(){
ll n;
cin>>n;
 
for(int i= 1;i<=sqrt(n);i++){
    if(n%i==0){
        cout<<i<<endl;;
   }
}
for(int i= sqrt(n);i>=1;i--){
    if(n%i==0){
        cout<<n/i<<endl;;
   }
}
 
}
 
 
int main()
{
int T=1;
// cin>>T;
while(T--)
solve();
 
return 0;
}
