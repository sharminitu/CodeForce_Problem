// codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool f = 0;
        long long n;
        cin >> n;
        vector<long long>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        
        long long x;
        cin>>x;
        int mx= *max_element(v.begin(),v.end());
        int mn = *min_element(v.begin(),v.end());
        if (mn <= x && mx >= x)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}