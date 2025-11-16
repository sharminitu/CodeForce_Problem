#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    bool f=0;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int>a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int>temp = a;
        temp[n] = a[n];

        sort(temp.begin(),temp.end());
      
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=temp[i]){
            f=0;

        }
    }

        if (f==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            
            cout<<2<<endl;
           for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                cout<<a[i]<<" "<<a[j]<<endl;
            }
           }
            cout<<endl;
        }
    }

    return 0;
}