#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        
        string s;
        cin>>s;

        string m ="";
        int n=s.length();
        for(int i=0;i<n-2;i++){
           
            m+=s[i];
        }

        char c = 'i';
        cout<<m+c<<endl;
    }
    return 0;
}