#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x,y,z;
        cin>>x>>y>>z;

        long long a,b,c;

        a=b=c=0;
        a|=x,b|=x;
        b|=y,c|=y;
        c|=z,a|=z;

        if((a&b)==x &&(b&c)==y && (c&a)==z){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}