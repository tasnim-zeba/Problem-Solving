#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans[100005];
int main()
{
    ll t,n,m,x,i,j,d,c,sum,l,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x;
        vector< pair<ll,ll> >v;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(make_pair(a,i));
        }
        ///sort(a,a+n);
        sort(v.begin(),v.end());
       /* for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }*/
        c=0;
        sum=0;
        l=v.size();
        vector<ll>r;
        for(i=0;i<l;i++)
        {
            sum=sum+v[i].first;
            c++;
            r.push_back(v[i].second);
            if((v[l-1].first-sum)<=x)
            {
                break;
            }
        }
        if((1+(n-c))<m)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if((1+(n-c))<m)
                cout<<"YES"<<endl;
                for(i=0;i<n;i++)
                {
                    ans[i]=-1;
                }
                for(i=0;i<r.size();i++)
                {
                    ans[r[i]]=1;
                }
                c=2;
                for(i=0;i<n;i++)
                {
                    if(ans[i]==-1)
                    {
                        ans[i]=c;
                        c++;
                    }

                }
                 for(i=0;i<n;i++)
                {
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
        }
    }
    return 0;
}
