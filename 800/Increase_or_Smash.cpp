#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {

        cin >> n;
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            s.insert(a);
        }

        cout<<((s.size()*2)-1)<<endl;

        
    }
    return 0;
}