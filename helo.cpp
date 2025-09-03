#include <bits/stdc++.h>
using namespace std;
class a
{
    int n;
    string s;
public:
    a(int n,string s)
    {
        this ->n =n;
        this ->s =s;
    }
};
int main()
{
    a* he = new a(10,"Saiful");



    delete he;
    return 0;
}