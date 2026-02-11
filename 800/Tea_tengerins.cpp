#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mn = *min_element(a.begin(),a.end());

        int c =0;
        for(int i=0;i<n;i++){

            while(a[i]>=mn){
            int s = a[i]/mn;
            c++;
            }

        }

        cout<<c<<endl;
       
    }
}