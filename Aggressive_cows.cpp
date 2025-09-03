/*TGS*/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a/__gcd((a), (b)))*b)
using namespace std;
const ll N= 1e6;
ll n,cow;
ll a[N];
bool maxDis(ll aa)
{
    ll cnt = cow;
    ll last_pos =-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]-last_pos >= aa or last_pos == -1)
        {
            cnt--;
            last_pos = a[i];
        }
        if(cnt ==0)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
  cin>>n>>cow;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  ll lo=0,hi=1e9,mid;
  while(hi-lo> 1)
  {
    mid=(hi+lo)/2;
    if(maxDis(mid))
    {
        lo=mid;
    }
    else {
        hi = mid-1;
    }
  }
  if(maxDis(hi))
  {
    cout<<hi<<endl;
  }
  else cout<<lo<<endl;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;for(int i=0;i<t;i++) solve();
    return 0;
}