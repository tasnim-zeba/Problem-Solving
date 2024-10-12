#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,ans,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll x[n+1],y[n+1];
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>y[i];
        }
        vector<ll>pos,neg;
        for(i=0;i<n;i++)
        {
            if((y[i]-x[i])>=0)
            {
                pos.push_back(y[i]-x[i]);
            }
            else{
                 neg.push_back(x[i]-y[i]);
            }
        }
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        ans=pos.size();
        ll sp=pos.size(),sn=neg.size();
        i=0;
        k=0;
        for(j=0;j<sn;j++)
        {
            for(i=k;i<sp;i++)
            {
                if(pos[i]>=neg[j])
                {
                    ans++;
                    pos[i]=-1;
                    k++;
                    break;
                }
                else
                {
                    k++;
                }
            }
        }
        cout<<ans/2<<endl;
    }
}
