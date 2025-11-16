#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;

    int t = (240-k);

    int r=0;
 
    for(int i=1;i<=n;i++){
       
        r = r+i*5;
      if(r+k<=240){
        c++;
      }
    }

    cout<<c<<endl;
    return 0;
}