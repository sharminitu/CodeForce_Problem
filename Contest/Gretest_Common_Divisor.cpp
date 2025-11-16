#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int>v(n);

        for (int i = 0;i < n; i++)
    {
        cin>>v[i];
    }

    int res =v[0] ;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = i+1;j<n;j++){
        res = __gcd(v[i],v[j]);
        mx = max(mx,res);
        }
    }

    cout<<mx<<endl;
}