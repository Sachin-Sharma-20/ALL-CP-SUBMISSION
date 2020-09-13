#include<bits/stdc++.h>
using namespace std;
typedef vector <int> vi;
typedef set <int> se;
#define endl "\n"
#define for(i,a,b) for(int i = a;i<b;i++)
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int MOD = 1e9+7;
long long mod(long long x){
    return ((x%MOD + MOD)%MOD);
}
long long add(long long a,long long b){
    return mod(mod(a)+mod(b));
}
long long mul(long long a,long long b){
    return mod(mod(a)*mod(b));
}
long long sub(long long a,long long b){
    return mod(mod(a)-mod(b));
}

ll power(ll a,ll b){
    if(b==0) return 1;
    if (b==1) return a%MOD;
    ll res = 1;
    while(b>0){
        if(b%2!=0) res =mul(res,a);
        a = mul(a,a);
        b = b/2;

    }
    return res;

}

void solve(){
    ll n;
    cin>>n;
    ll t;
    if(n==1) {cout<<0<<endl;return;}
    if (n==2) {cout<<2<<endl;return;}
    t = sub(add(power(10LL,n),power(8LL,n)),mul(2LL,power(9LL,n)));
    cout<<t;
}
 
 
int main()
{

solve();
 
return 0;
}
