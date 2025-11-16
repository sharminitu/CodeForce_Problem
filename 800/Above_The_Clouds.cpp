#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool f1 =0;
        char s[n];
        cin>>s;

        string s1 = s;

        for(int i=0;i<n;i++){
            if(s[n/3]==s[i]){
            f1=1;
            }
        }

        if(f1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}