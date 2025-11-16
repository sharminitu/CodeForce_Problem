#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, c = 0;
    cin >> n >> k;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    int mn =INT_MAX;
    for (int i = 1; i< k-n; i++)
    {
       
    mn = min(mn, v[i+n-1] - v[i]);
    }

    cout << mn << endl;
    return 0;
}