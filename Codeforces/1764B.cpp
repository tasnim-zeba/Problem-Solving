#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,c,g,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        g=0,m=INT_MIN;
        for(i=1;i<=n;i++)
        {
            cin>>j;
            g=__gcd(g,j);
            m=max(m,j);
        }
        cout<<m/g<<endl;
    }
}
