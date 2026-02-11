#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;

    while (t--)
    {

        cin >> n;
        ;
        bool f=0;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        int x=0;
        for(int i=0;i<n;i++){
          x++;
          if(a[i]==x){
            x++;
          }
        }

        cout<<x<<endl;
    }

    return 0;
}