#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a,d,e,s;
    cin>>m>>n>>a;

     d = (m+a-1)/a;
     e = (n+a-1)/a;

     s = d*e;
    cout<<s<<endl;

    return 0;
}