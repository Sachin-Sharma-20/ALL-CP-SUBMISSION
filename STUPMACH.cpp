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
#define mod 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(i,0,n) cin>>a[i];
    ll s = a[0];
    ll minn = a[0];
    for(i,1,n){
        minn = min(minn,a[i]);
        if(a[i]!=0){
            s += minn;
        }
        
        
    }         
    
    cout<<s<<endl;
}
 
 
int main()
{
int T;
cin>>T;
while(T--)
solve();
 
return 0;
}
