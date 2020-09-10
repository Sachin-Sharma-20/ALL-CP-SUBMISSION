#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef set <int> se;
#define endl "\n"
#define for(i,a,b) for (int i =a ;i<b;i++)
int main()
{   int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        se a;

        for(i,0,n) {
            int x;
            cin>>x;
            a.insert(x);
        }
        int count  = a.size();
        auto f = a.find(0);
        if(f!=a.end()){
            cout<<count-1<<endl;
        }
        else cout<<count<<endl;

    }
 
 
return 0;
   
}
