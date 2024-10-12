#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,p,prev;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<int,int>>a;
        p=0;
        for(i=0; i<n; i++)
        {
            cin>>j;
            if(j)
            {
                p++;
                a.push_back({j,i+1});
            }
        }
        if(p%2)
        {
            cout<<-1<<endl;
            continue;
        }
        if(p==0)
        {
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
            continue;
        }
        vector<pair<ll,ll>>v;
        prev=0;
        for(i=0; i<a.size()-1; i=i+2)
        {
            if(a[i].first==a[i+1].first)
            {
                if((a[i+1].second-a[i].second)%2)
                {
                    v.push_back({prev+1,a[i+1].second});
                    prev=a[i+1].second;
                }
                else
                {
                    if((prev+1)!=a[i].second)
                    v.push_back({prev+1,a[i].second-1});
                    v.push_back({a[i].second,a[i].second});
                    prev=a[i].second;
                    v.push_back({prev+1,a[i+1].second});
                    prev=a[i+1].second;
                }
            }
            else
            {
                if((a[i+1].second-a[i].second)%2)
                {
                    if((prev+1)!=a[i].second)
                    v.push_back({prev+1,a[i].second-1});
                    v.push_back({a[i].second,a[i+1].second-1});
                    prev=a[i+1].second-1;
                    v.push_back({prev+1,a[i+1].second});
                     prev=a[i+1].second;
                }
                else
                {
                    v.push_back({prev+1,a[i+1].second});
                     prev=a[i+1].second;
                }
            }
        }
        if(prev<n)
        {
            v.push_back({prev+1,n});
        }
        cout<<v.size()<<endl;
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
}

