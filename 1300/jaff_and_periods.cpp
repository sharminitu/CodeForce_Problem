#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    vector<long long> a(n);
    map<int,int>mp;

    set<int>st;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int ans = -1;
    for(int i=0;i<n-1;i++){
        if(mp[i]<=1){
            ans =0;
        }
        else{
            ans = abs(mp[a[i]]-mp[a[i]]);
        }
    }


    cout<<mp.size()<<endl;
   for(auto s : mp){
    cout<< s.first<<" "<<s.first*ans<<endl;
   }

    return 0;
}