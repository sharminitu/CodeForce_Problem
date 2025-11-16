#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    bool f=0;
    while (t--)
    {
        int n,j,k;
        cin >> n>>j>>k;
        vector<int>a(n);
        int mx=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx,a[i]);
        }

        if(k>1||a[j-1]==mx){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}