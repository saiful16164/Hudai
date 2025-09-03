/*TGS*/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a/__gcd((a), (b)))*b)
using namespace std;
ll w,h,n; 
bool isValid(__int128_t mid)
{
    __int128_t total = (mid/w)*(mid/h);
     return total >=n;
}
void solve()
{
    cin>>w>>h>>n;
    __int128_t lo=0,hi=1e18,mid;
    ll ans=0;
    while(lo<=hi)
    {
        mid = (hi+lo)/2;
        if(isValid(mid))
        {
            ans = mid;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
     cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}