#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    int  k,w,r=1,m,s=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++){
        r=i*k;
        s += r;
    }
    m= s-n;
    if(m<0){
        cout<<"0"<<endl;
    }
    else{
        cout<<m<<endl;
        }
    return 0;
}