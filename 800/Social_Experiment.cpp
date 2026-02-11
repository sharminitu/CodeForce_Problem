#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long s,k,m;
        cin>>s>>k>>m;

        if(s<=k){
            cout<< max(0ll,(s-m%k))<<endl;
        }
        else{
            long long kotobar = (m/k);
            if(kotobar & 1){
                cout<<k-m%k<<endl;
            }
            else{
                cout<<s-m%k<<endl;
            }
        }
    }

    return 0;
}