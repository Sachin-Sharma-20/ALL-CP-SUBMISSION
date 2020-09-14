#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,a,b) for(ll i = a; i<b ;i++)


void solve()
{
    ll n ;
    cin>>n;
    ll a[n];
    rep(i,0,n) cin>>a[i];
    
    ll best = n;
    ll worst = 1;
    rep(i,0,n){
        vector<bool> infect(n);
        infect[i] = true;
        ll cnt = 0;
        ll mx = a[i],mn = a[i];
        for(ll j = i-1;j>=0;j--){
            if(a[j]>a[i]) infect[j] = true;
            mx = max(mx,a[j]);
        }
        rep(j,i+1,n) {
            if(a[j]<mx) infect[j] = true;
            mn = min(mn,a[j]);
        }
        for(ll j = i-1;j>=0;j--){
            if(a[j]>mn) infect[j] = true;
            
        }
        rep(j,0,n) cnt+=infect[j];
        worst = max(worst,cnt);
        best= min(best,cnt);

    }
    
    cout<<best<<" "<<worst<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
