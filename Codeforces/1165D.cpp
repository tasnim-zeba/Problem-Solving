#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>d(n);
        for(i=0;i<n;i++)
        {
            cin>>d[i];
        }
        sort(d.begin(),d.end());
        x=d[0]*d[n-1];
        vector<ll>v;
        for(i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                if(i==(x/i))
                {
                    v.push_back(i);
                }
                else
                {
                    v.push_back(i);
                    v.push_back(x/i);
                }
            }
        }
        sort(v.begin(),v.end());
        if(v==d)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
