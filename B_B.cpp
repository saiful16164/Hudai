/*TGS*/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a/__gcd((a), (b)))*b)
using namespace std;

  

  

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   // long long t;cin>>t;for(long long i=0;i<t;i++)
  // cout<<"valo";
  long long n;
  cin>>n;
 // cout<<n<<" ";
  //vector<long long>v;
  long long mn=n+1;
  //long long ar[];
  for(long long i=1;i<=sqrt(n);i++)
  {
   // cout<<i<<" "<<n/i<<nl;
    if((n%i)==0){
        //cout<<i<<" "<<n/i<<" ";
        mn=min((((i-1)+(n/i)-1)),mn);
    }
}
cout<<mn;
//cout<<v.size()<<nl;



    return 0;
}