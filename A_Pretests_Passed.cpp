#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    int a,b,c; cin>>a>>b>>c;
    int mn = min({a,b,c});
    int sum= a+b+c;
    if(sum%9 == 0 and sum/9 <= mn) cout<<"YES\n";
    else cout<< "NO\n"; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}