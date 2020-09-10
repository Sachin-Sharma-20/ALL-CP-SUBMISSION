#include<bits/stdc++.h>
using namespace std;
typedef vector <int> vi;
typedef set <int> se;
#define endl "\n"
#define for(i,a,b) for(int i = a;i<b;i++)
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define ll long long int
#define mod 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll funct(ll tl){
    long double r = sqrtl(1ul+4*(tl));
    r = r - 1.0;
    r = r/2.0;
    ll s = r;
    return s;
}

int main()
{
int T;
cin>>T;
while(T--)
{
    ll n;
    cin>>n;
    if(n<3) cout<<0<<endl;

    else
    {
        ll total = (n*(n+1)/2);
        if(total%2!=0) cout<<0<<endl;
        else{
            ll idx = funct(total);
            ll total2 = idx*(idx+1)/2;
            if(total/2==total2){
                ll res = (idx*(idx-1ul))/2l+((n-idx)*(n-idx-1ul))/2l+(n-idx);
                cout<<res<<endl;
                }
            else{
                cout<<n-idx<<endl;
            }
        }
    }
}
 
return 0;
}
