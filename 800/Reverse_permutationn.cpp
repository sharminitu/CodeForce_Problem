#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        b=a;

        sort(b.rbegin(),b.rend());

        int mx=-1,indx1=-1,indx2=-1;
        for(int i=0;i<n;i++){
           if(b[i]!=a[i]){
                mx = b[i];
                indx1 = i;
                break;
           }

        }

        if(indx1==-1){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            continue;
        }

        for(int i=0;i<n;i++){
           if(mx == a[i]){
            indx2 = i;
            break;
           }
        }

        reverse(a.begin()+indx1,a.begin()+indx2+1);

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;


    }
    return 0;
}