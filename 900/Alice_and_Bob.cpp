#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long k;
        cin >> n>>k;

        vector<long long >v(n);

        int l=0,r=0;
        for(int i =0;i<n;i++){
            cin>>v[i];
            if(v[i]<k){
            
                l++;
            }
            if(v[i]>k){
                r++;
        }
    }

       if(l>r){
        cout<<k-1<<endl;
       }
       else{
        cout<<k+1<<endl;
       }

 
    }

    return 0;
}