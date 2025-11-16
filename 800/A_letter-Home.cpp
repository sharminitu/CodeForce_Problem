#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=s;i>=1;i--){
            s-=1;
          c++;
        }
        for (int i = 1; i <=a[n-1]; i++)
        {
            s+=1;
            c++;
        }

        cout<<c<<endl;
    }
}