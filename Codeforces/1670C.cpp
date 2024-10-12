#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,ans,x,y,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1],c[n+1],pos[n+1],done[n+1]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            pos[a[i]]=i;
        }
         for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
         for(i=0;i<n;i++)
        {
            cin>>c[i];
            done[c[i]]=1;
        }
        ans=1;
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i]);
            else if(done[a[i]]||done[b[i]]);
            else
            {
                x=a[i];
                f=1;
                y=b[i];
                if(done[a[i]])f=0;
                vector<ll>v;
                v.push_back(a[i]);
                while(a[i]!=y)
                {
                    if(done[y])f=0;
                    v.push_back(y);
                    y=b[pos[y]];
                    if(done[y])f=0;
                }
                if(f)
                {
                    ans=(ans*2)%1000000007;
                }
                for(j=0;j<v.size();j++)
                {
                    done[v[j]]=1;
                }
            }

        }
        cout<<ans<<endl;
    }
}

