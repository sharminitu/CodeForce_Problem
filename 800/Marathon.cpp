#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,e,d;
        cin>>a>>b>>e>>d;

        int c=0;
        if(b>a){
            c++;
        }
        if(e>a){
            c++;
        }
        if(d>a){
            c++;
        }

        cout<<c<<endl;
    }
    return 0;
}