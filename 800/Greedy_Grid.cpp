#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n[t], m[t];
    
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            cin>>n[i]>>m[j];
        }
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if(n[i]>=m[j]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
    
}