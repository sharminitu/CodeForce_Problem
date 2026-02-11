#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {
        string s;
        cin>>s;

     
        int a,b;
        int s1=0,s2=0;
        for(int i=0;i<3;i++){
           a = s[i]-'0';
           s1+=a;
        }

        for(int i=3;i<s.length();i++){
            b = s[i]-'0';
            s2+=b;
        }

        if(s1==s2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}