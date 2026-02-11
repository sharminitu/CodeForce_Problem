#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n>>k;

        string s;
        cin>>s;

        s.push_back('1');

        long long ans =0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                break;
            }
            else{
                ans++;
            }
        }

        long long lastIndex = -1;
        for(int i=0;i<=n;i++){
            if(s[i]=='1'){
                if(lastIndex==-1){
                }
                else{
                    long long r = i,l = lastIndex;
                     long long middleZero = r-l-1;
                     long long ghumaiteparbo = middleZero - k;

                     if(ghumaiteparbo<0)
                        ghumaiteparbo=0;
                     ans+=ghumaiteparbo;
                }
                lastIndex = i;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}