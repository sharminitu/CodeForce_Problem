#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
   while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0,h=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            c++;
        }
        else{
            c=0;
        }

        if ( c==k )
        {
            h++;
            c=0;
            i++;
        }
    }

    cout<<h<<endl;
   }
       
    return 0;
}