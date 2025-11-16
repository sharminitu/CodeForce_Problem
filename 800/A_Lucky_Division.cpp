#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=0;

    if(n%4==0||n%7==0||n%44==0||n%47==0||n%74==0||n%777==0){
        cout<<"YES"<<endl;
    }
    else{

        string s = to_string(n);

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '7' || s[i] == '4')
            {
                f++;
            }
        }

        if (f==s.length())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
