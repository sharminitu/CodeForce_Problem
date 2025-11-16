#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,c=0;
    cin >> n;

    while(n--){
        int p,q;
        cin>>p>>q;
        if((q-p)>=2){
            c++;
    }
}
    cout << c << endl;
    return 0;
}
