#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,r,n;
    int a;
    cin>>t;
  for(int i=0;i<t;i++){
        cin>>a;
        n = a%10;
        while(a>0){
            r = a%10;

            if(n>r){
                n=r;
            }
            a=a/10;
        }
        cout << n << endl;
    }

    return 0;
   
}