#include <bits/stdc++.h>
using namespace std;
int main()
{
      int a,b,c;
      cin>>a>>b>>c;

      int mx =0;
      int miin =0;
      mx = max(a,b);
      miin = min(a,b);

      mx = max(mx,c);
      miin = min(miin,c);

      int ans = (mx-miin);

      cout<<ans<<endl;

    
    return 0;
}