#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    int a[150];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }

    sort(a,a+n,greater<int>());
    int c = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
       m+=a[i];
       c++;
       if(m>(s-m)){
        break;
       }
    }
    cout<<c<<endl;

    return 0;
}