#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin>>t;

    while(t--){
    int n,k,c = 0;
    cin >> n>>k;

    vector<int>v;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);
    for (int i = 0; i < n-1; i++)
    {
        if(abs(a[i]-a[i+1])<=k){
           v.push_back(a[i]);
        }
    }

    cout<<n-v.size()<<endl;
}

return 0;
}