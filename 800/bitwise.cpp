#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

      int mx = *max_element(a.begin(),a.end());

      cout<<mx<<endl;

    }

    return 0;
}