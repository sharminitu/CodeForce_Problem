#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int s=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s+=x;
    }

    int c=0;
    int total;
    for(int i=1;i<=5;i++){
        total = s+i;

        if(total%(n+1)==1){
            c++;
        }
    }
    cout<<5-c<<endl;

    return 0;

}