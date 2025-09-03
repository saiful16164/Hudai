/*TGS*/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a/__gcd((a), (b)))*b)
using namespace std;
void solve()
{
  ll n; cin>>n; 
  ll a[n],b[n];
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  set<ll>st;
  for(ll i=0;i<n;i++)
  {
    for(ll j=0;j<n;j++)
    {
        ll t= a[i]+b[j];
        st.insert(t);
    }
  }
  if(st.size()>=3) cout<<"YES\n";
  else cout<<"NO\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;for(int i=0;i<t;i++) solve();
    return 0;
}