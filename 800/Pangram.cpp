#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    bool f=0;
   string s;
   cin>>s;
    bool present[26] ={false};

    for(int i=0;i<n;i++){
        char s1 = tolower(s[i]);
      if(s1>='a'&&s1<='z'){
    
        present[s1-'a'] =true;
      }
    }

    for(int i=0;i<26;i++){
        if(!present[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;

}