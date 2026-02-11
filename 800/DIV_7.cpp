#include <bits/stdc++.h>
using namespace std;

long digsum(int n)
{
    long s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if(n%7==0){
            cout<<n<<endl;
        }
        else{
            int ans =-1;
        for(int i=1;i<10;i++){
            if((n-n%10+i)%7==0){
                ans = n-n%10+i;
            }
        }
        cout << ans << endl;
    }
    }

    
    return 0;
}