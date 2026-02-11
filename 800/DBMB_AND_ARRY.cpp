#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n,s,x;
        cin>>n>>s>>x;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }


        int m = s-sum;

        if(m%x==0 && m>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}