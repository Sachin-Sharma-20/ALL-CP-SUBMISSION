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
#define mod 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void solve(){
    int n;
    cin>>n;
    int profit = 0 ;
    int s,p,v;
    for(i,0,n) {
        cin>>s;cin>>p;cin>>v;
        int pr = floor(p/(s+1))*v;
        profit = max(pr,profit);

    }
    cout<<profit<<endl;


}
 
 
int main()
{
int T;
cin>>T;
while(T--)
solve();
 
return 0;
}
