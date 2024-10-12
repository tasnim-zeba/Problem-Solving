#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,i,j,c,x,y,f,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n+1][m+1];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        x=0,y=0;
        f=1,c=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m-1; j++)
            {
                if(a[i][j]>a[i][j+1])
                {
                    f=0;
                    c=i;
                }
            }
        }
        if(f==1)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }
        f=1;
        vector<ll>v;
        for(j=0; j<m; j++)
        {
            v.push_back(a[c][j]);
        }
        sort(v.begin(),v.end());
        for(j=0; j<m; j++)
        {
            if(a[c][j]!=v[j])
            {
                x=j;
                p=v[j];
                break;
            }
        }
        for(i=x+1;i<m;i++)
        {
            if(a[c][i]==v[x])
            {
                y=i;
            }
        }
        //cout<<x<<" "<<y<<endl;
        for(i=0; i<n; i++)
        {
            swap(a[i][x],a[i][y]);
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m-1; j++)
            {
                if(a[i][j]>a[i][j+1])
                {
                    f=0;
                }
            }
        }
        if(f)
        {
            cout<<x+1<<" "<<y+1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
