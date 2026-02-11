#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>s;
         for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int c=0;
        int mx =0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx,a[i]);
            if(a[i]==mx){
                c++;
            }
        }
       int res = n-c;
       cout<<res<<endl;
    }

    return 0;
}