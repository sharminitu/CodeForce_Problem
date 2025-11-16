#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,s,s1=0;
    cin>>n>>h;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i]<=h){
            s=1;
        }
        else{
            s=2;
        }
        s1+=s;
    }
    cout<<s1<<endl;

    return 0;
}