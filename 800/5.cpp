#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,t,i;
    cin>>a>>b;

    int c[a];

    for(int i=0;i<a;i++){
        cin>>c[i];
    }

    for ( i = 0; i < a; i++)
    {
        if (c[i] > c[i + 1] || c[i] <c[i + 1])
        {
            t=c[a];
        }
    }
    cout<<t+1<<endl;
}