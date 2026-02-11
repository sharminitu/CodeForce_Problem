#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       int n,m,k;
       cin>>n>>m>>k;

       int a[n];

       int c1=0,c2=0;
       for(int i=0;i<n;i++){
        cin>>a[i];
       }

    int b[m];
       for (int j = 0; j < m; j++)
       {
           cin >> b[j];

           for(int i=0;i<n;i++){
           if(b[j]+a[i]<=k){
            c2++;
           }
           }
       }

       cout<<c2<<endl;
    }
    return 0;
}