#include<bits/stdc++.h>
using namespace std;
typedef vector <int> vi;
typedef set <int> se;
#define endl "\n"
#define for(i,a,b) for(auto i = a;i<b;i++)
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int MOD = 1e9+7;
ll mod(ll x){
return ((x%MOD+MOD)%MOD);
}
ll add(ll a,ll b){
return mod(mod(a)+mod(b));
}
ll mul(ll a,ll b){
return mod(mod(a)*mod(b));
}
ll sub(ll a,ll b){
return mod(mod(a)-mod(b));
}

ll dp[2001];

int rec(ll s){
    if(s==0) return 1ll;
    if(s==1 or s==2) return 0ll;
    if(s>=3 and s<=5) return 1ll;
    if(dp[s]!=-1) return dp[s];
    ll total = 0;
    for(i,3,s+1)
        if(s-i>=0) 
            total = add(total,rec(s-i));
    return dp[s] = total;
    
}

void solve(){
ll n;
cin>>n;
memset(dp,-1,sizeof(dp));
dp[0] = 1;
cout<<rec(n)<<endl;

}
 
 
int main()
{

solve();
 
return 0;
}
