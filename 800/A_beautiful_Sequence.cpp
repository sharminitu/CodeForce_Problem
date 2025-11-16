#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;

    bool f=0;
        int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<=i){
            f=1;
        }
    }

    if(f==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }

    return 0;
}