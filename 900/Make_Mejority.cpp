#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string  s;
        cin>>s;
        int c0=0,c1=0,current=0;

        for(int  i=0;i<=n;i++){
            if(i==n||s[i]=='1'){
                if(current){
                    c0++;
                    current=0;
                }
            }

            if(s[i]=='1'){
                c1++;
            }
            else{
                current++;
            }
        }

        if(c1>c0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}