// codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool f = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int x;
        cin>>x;


        int mx=0;
        int mn =0;
        for(int i=0;i<n;i++){

            mx = max(mx,arr[i]);

            mn = min(mn,arr[i]);

        }

        cout<<mn<<" "<<mx<<endl;
        if (mn <= x && mx >= x)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}