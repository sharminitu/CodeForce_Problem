#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;

    int h[n],a[n];
    for(int i=0;i<n;i++){
        cin>>h[i]>>a[i];
    }

    for(int j=0 ; j<n ;j++){
    for (int i = 0; i < n; i++)
    {
        if(j==i){continue;
        }
        if(h[j]==a[i]){
            c++;
        }
       
    }
    }
    cout<<c<<endl;

}