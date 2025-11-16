#include <bits/stdc++.h>
using namespace std;
bool isvowel(char c){
    return (c=='e'||c=='a');
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;
        string ans="" ;

        int  i=n-1;

      while(i>=0){
            if(isvowel(s[i])){
                ans +=s[i-1];
                ans+=s[i];
                ans+='.';
                i-=2;
            }
            else{
                ans+=s[i-2];
                ans+=s[i-1];
                ans+=s[i];
                ans+='.';

                i-=3;
            }
        }
        ans.pop_back();
        reverse(ans.begin(),ans.end());

        cout<<ans<<endl;

    }
    return 0;
}