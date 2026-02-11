#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        int x;
        cin>>x;

        int m = log2(x);

        cout<<2*m+3<<endl;
    }

    return 0;
}