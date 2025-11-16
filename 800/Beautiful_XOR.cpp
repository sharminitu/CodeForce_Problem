#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a,b;
        cin >> a>>b;

        vector<int> v;

        for (int i = 0; i <a; i++)
        {
            a^=i;
            v.push_back(i);
            if(a==b){
                break;
            }
        }
        for(auto x :v){
            cout<<x<<" ";
        }
        cout<<endl;

    }

    return 0;
}