#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
    string s,r;
    cin>>s;

    r ="";

    char c;

    for(int i=0;i<s.length();i++){
    c = towlower(s[i]);

    r += c;
    }
   
    if(r=="yes"){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

    return 0;
}