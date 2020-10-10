#include <bits/stdc++.h>
typedef long long int ll;
#define f(a,b) for(int i = a ; i < b ; i++)
#define frev(a,b) for(int i = a ; i >= b ;)
#define mod 1000000007
using namespace std;
#define pb push_back
#define debugVector(v) for(int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << endl;
#define debugArray(arr, n) for(int i=0; i<n; i++) cout << arr[i] << " "; cout << endl;

typedef vector<int> vi; 
typedef pair<int, int> pi; 

bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// Code here
	int t; cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int cnt = 0;
	    f(0,n-1)
	    {
	        if(!isVowel(s[i]) && isVowel(s[i+1]))
	            cnt++;
	    }
	    
	    cout << cnt << endl;
	}
}





