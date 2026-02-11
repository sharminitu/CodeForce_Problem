//https : // codeforces.com/contest/2178/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        bool f=0;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='Y'){
              c++;
            }
        }

        if(c<=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }
    return 0;
}