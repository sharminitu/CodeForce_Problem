#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s,c;
        cin>>s;

        c = s[0];
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                c =s[i+1];

            }
        }

        cout<<c;
    }
}
