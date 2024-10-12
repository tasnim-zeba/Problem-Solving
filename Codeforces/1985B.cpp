#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t, n, x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans =0LL, k=2;
        for(x=2;x<=n;x++)
        {
            ll z=0LL;
            for(int i=1; ;i++)
            {
                if((i*x)>n)break;
                z+=i*x;
            }
            //cout<<z<<endl;
           if(z>ans)
           {
               ans=z;
               k=x;
           }
        }
        cout<<k<<endl;
    }
}

