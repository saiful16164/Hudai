/*TGS*/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a/__gcd((a), (b)))*b)
using namespace std;
void solve()
{
  string str; cin>>str;
  string t = "us";
  string s = "i";
  size_t pos = str.rfind(t);
  while (pos != std::string::npos) {
      str.replace(pos, t.length(), s);
      pos = str.find(t, pos + s.length()); 
      break;
  }
  cout<<str<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;for(int i=0;i<t;i++) solve();
    return 0;
}