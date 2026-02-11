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
        long long n;
        cin >> n;
        vector<long long> v(n);
        vector<long long>a;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int r;
        for (int i = 0; i < n; i++)
        {
            r = v[n-1]%v[0];

            if(r%2==0){
                cout<<v[0]<<" "<<v[n-1]<<endl;
                break;
          
           }
           else{
            v.erase(v.begin());
            v.erase(v.end());
           }
        }
        v = v;
    
        cout<<-1<<endl;

    }
    
}