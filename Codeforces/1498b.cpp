#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,w,i,c,j,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>w;
        multiset<ll>v;
        multiset<ll>:: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>j;
            v.insert(j);
        }
        c=1;
        s=w;
        while(v.size())
        {
            it=v.upper_bound(s);
            if(it==v.begin())
            {
                s=w;
                c++;
            }
            else
            {
                it--;
                ll p=*it;
                s=s-p;
                v.erase(it);
            }
        }
        cout<<c<<endl;
    }
}
