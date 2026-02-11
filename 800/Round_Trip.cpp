#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--){
        int r,x,d,n;
        cin>>r>>x>>d>>n;

        string s;
        cin>>s;

        int c =0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                c++;
                r = max(0,r-d);
            }
            else{
                if(r>=x){
                    continue;
                }
                else{
                    c++;
                    r = (0,r-d);
                }
            }
        }

        cout<<c<<endl;
    }
    return 0;
}