#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin.ignore();
    int ans =0;
    int ss;
    for(int i=0;i<n;i++){
       
        cin>>s;
    

    if (s == "Tetrahedron"){
        ss=4;
        ans+=ss;   
    }

     if (s == "Cube"){
        ss=6;
        ans+=ss;
    }

     if (s == "Octahedron")
    {
        ss = 8;
        ans += ss;
    }

     if (s == "Dodecahedron")
    {
        ss = 12;
        ans += ss;
    }

     if (s == "Icosahedron")
    {
        ss = 20;
        ans += ss;
    }
}

    cout<<ans<<endl;

    return 0;
}