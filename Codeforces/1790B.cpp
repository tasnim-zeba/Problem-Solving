#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,r,s,i,j,d,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>r;
        vector<ll>v;
        v.push_back(s-r);
        d=r/(n-1);
        m=r%(n-1);
        while(v.size()!=n)
        {
            if(m)
            {
                v.push_back(d+1);
                m--;
            }
            else
            {
                v.push_back(d);
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
