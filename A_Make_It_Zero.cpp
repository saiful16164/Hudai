/*TGS*/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a/__gcd((a), (b)))*b)
using namespace std;
void solve()
{
    int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	if (n & 1) {
		cout << "4" << '\n';
		cout << "1 " << n - 1 << '\n';
		cout << "1 " << n - 1 << '\n';
		cout << n - 1 << ' ' << n << '\n';
		cout << n - 1 << ' ' << n << '\n';
	} else {
		cout << "2" << '\n';
		cout << "1 " << n << '\n';
		cout << "1 " << n << '\n';
	}
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;for(int i=0;i<t;i++) solve();
    return 0;
}