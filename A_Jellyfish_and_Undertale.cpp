/*TGS*/
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a / __gcd((a), (b))) * b)
using namespace std;
void solve()
{
    ll a, b, n,sum=0;
    cin >> a >> b >> n;
    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for(int i=0;i<n;i++)
    {
        b--;
        if(b ==0) break;
        if(ar[i]+b <= a)
        {
            sum+=ar[i];
            b+=ar[i];
        }
        else if(ar[i]+b > a) sum+=a;
        
    }
    cout<<sum<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}