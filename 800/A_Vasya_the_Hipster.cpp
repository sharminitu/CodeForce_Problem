
#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int a,b;
    cin>>a>>b;

    int c;
    if(a>b){
        c=b;
    }
    else{
        c=a;
    }

    int m = abs(a-b);

    int s = m/2;


    cout<<c<<" "<<s<<" "<<endl;
}