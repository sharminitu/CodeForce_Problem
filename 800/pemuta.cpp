#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;



    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if(n==1){
        cout<<"1"<<endl;
    }
    else if(n==4){
        cout<<"2 4 1 3"<<endl;
    }
    else{
        if(n%2==0){
            cout<<n<<" ";
            cout<<n/2<<" ";

            int f = 1;
            int l = n-1;
            
            for(int i=1;i<=n/2;i++){
                if(f!=n/2){
                    cout<<f<<" ";
                }
                if(l!=n/2){
                    cout<<l<<" ";
                }

                l--;
                f++;
            }
        }
        else{

                cout << n << " ";
                cout << (n / 2)+1 << " ";

                int f = 1;
                int l = n - 1;

                for (int i = 1; i <= n / 2; i++)
                {
                    if (f != (n / 2)+1)
                    {
                        cout << f << " ";
                    }
                    if (l != (n / 2)+1)
                    {
                        cout << l << " ";
                    }

                    l--;
                    f++;
                }
        }
    }
    
    cout << endl;

    return 0;
}