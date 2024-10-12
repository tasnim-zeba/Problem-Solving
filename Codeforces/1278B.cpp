#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,i,j;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(a<b)swap(a,b);
        ll d=a-b;
        ll s=0;
        for(i=1; ;i++)
        {
            s=s+i;
            if((s+d)%2==0)
            {
                ll k=(s+d)/2;
                if(s>=k&&(s-k)==(k-d))
                {
                    break;
                }
            }
        }
        cout<<i<<endl;
    }
}
