#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c;
    cin>>n>>a>>c;

    int m = a*n;

    int s = m-c;
    if(s<0){
        s = 0;
    }
   cout<<s<<endl;
   
}