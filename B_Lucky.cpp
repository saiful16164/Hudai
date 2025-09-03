#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int num; cin >>num;
    int last =0,start=0;
    for(int i=0;i<6;i++)
    {
        int t = num % 10;
        num = num/10;
        if(i < 3)
        {
            last += t;
        }
        else 
        {
            start += t;
        }
    }
    if(last == start) cout << "YES\n";
    else cout <<"NO\n";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}