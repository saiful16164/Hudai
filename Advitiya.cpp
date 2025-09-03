/*TGS*/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a/__gcd((a), (b)))*b)
using namespace std;
void solve()
{
    string s; cin>>s;
    string x; 
    x = "ADVITIYA";
    int sum=0;
    for(int i=0;i<8;i++)
    {
        if(s[i]!= x[i])
        {
            int r = x[i] - s[i];
            if(r < 0)
            {
                r=r+26;
            }
            sum+=r;
        }
    }
    cout<<sum<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;for(int i=0;i<t;i++) solve();
    return 0;
}