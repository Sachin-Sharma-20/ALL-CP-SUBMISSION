#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define rep(i,a,b) for(auto i = a;i<b;i++)
#define ll long long
 
void solve(){
ll n;
cin>>n;
ll arr[n];
rep(i,0,n) cin>>arr[i];
 
ll man =0,che=arr[0];
double euc = 0;
 
rep(i,0,n){
    man+= abs(arr[i]);
    euc += (arr[i]*arr[i]);
    che = max(che,abs(arr[i]));
}
 
 
cout<<man<<endl;
cout<<setprecision(17)<<sqrt(euc)<<endl;
cout<<che<<endl;
 
 
}
 
 
int main()
{
int T=1;
// cin>>T;
while(T--)
solve();
 
return 0;
}
