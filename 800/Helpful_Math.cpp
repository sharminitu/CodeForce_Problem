#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            int n = s[i]-'0';
            v.push_back(n);
        }
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i];

        if(i<=v.size()-2 && v.size()>1){
            cout<<'+';
        }
    }
}