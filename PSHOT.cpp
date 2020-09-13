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
    string goals;
    cin>>goals;
    int s = 0;
    int ca=0,cb=0,na=n,nb=n;
    for(i,0,2*n){
        if(((ca-cb)>0 and nb<(ca-cb)) || ( (cb-ca)>0 and na<(cb-ca))) break;
        
        if(i%2==0) {
            if(goals[i]=='1') ca++;
            na--;
        }
        else{
            if(goals[i]=='1') cb++;
            nb--;
        }
        s++;
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
