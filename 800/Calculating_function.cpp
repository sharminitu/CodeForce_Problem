#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin >> n;

    if(n%2==0){
        t = -(-n-1) / 2;
    }
    else{
    t = (-n-1)/2;
    }

    cout<<t<<endl;

    return 0;
}
