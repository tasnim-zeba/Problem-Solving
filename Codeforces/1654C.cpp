#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,c,i,ans,m,x,j,y,ele;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        m=0;
        map<ll,ll>fre;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            fre[a[i]]++;
            m=m+a[i];
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        ll c=1;
        priority_queue<ll>pq;
        pq.push(m);
        while(!pq.empty())
        {
            ele=pq.top();
            pq.pop();
            x=ele/2;
            y=ele-x;
            if(fre[x]>0)
            {
                fre[x]--;
            }
            else if(fre[x]==0&&x>1)
            {
                pq.push(x);
            }
            else
            {
                c=0;
            }
            if(fre[y]>0)
            {
                fre[y]--;
            }
            else if(fre[y]==0&&y>1)
            {
                pq.push(y);
            }
            else
            {
                c=0;
            }
            if(pq.size()>n)
            {
                c=0;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(fre[a[i]]>0)
            {
                c=0;
                break;
            }
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

