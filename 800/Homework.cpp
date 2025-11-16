#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        
        int a;
        cin>>a;

       string s1;
        cin>>s1;

        string s2 ;
        cin>>s2;
       for(int i=0;i<a;i++){
        if(s2[i]=='V'){
           s=s1[i]+s;
        }
        else{
            s=s+s1[i];
        }
       }
    
       cout<<s<<endl;
    }
}