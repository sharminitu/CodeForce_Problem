#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool f=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==1){
                f=1;
            }
        }
        if (f)
        {
            cout << "HARD" << endl;
        }
        else
        {
            cout << "EASY" << endl;
        }

    return 0;
}