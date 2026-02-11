#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int>c(n),d(n);

   
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        c[v[i]]++;

    }
    for (int i = 1; i <= n; i++)
    {
        if(c[i]!=i){
           d.push_back(c[i]);
    }
    }
    cout << (v.size() - d.size()) << endl;
}
    return 0;
}