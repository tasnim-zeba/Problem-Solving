#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q,n,i,j,k,e,c;
    cin>>q;
    while(q--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c=1;
        for(i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                c=0;
            }
        }
        if(a[n-1]==a[0])
        {
            c=0;
        }
        if(c)
        {
            if(n%2)
            {
                cout<<3<<endl;
                for(i=0; i<n-1; i++)
                {
                    if(i%2==0)
                        cout<<1<<" ";
                    else
                        cout<<2<<" ";
                }
                cout<<3<<" ";
                cout<<endl;
            }
            else
            {
                cout<<2<<endl;
                for(i=0; i<n; i++)
                {
                    if(i%2==0)
                        cout<<1<<" ";
                    else
                        cout<<2<<" ";
                }
                cout<<endl;
            }
            continue;
        }
        c=1;
        for(i=0; i<n-1; i++)
        {
            if(a[i]!=a[i+1])
            {
                c=0;
            }
        }
        if(c)
        {
            cout<<1<<endl;
            for(i=0; i<n; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
            continue;
        }
        ll ans[n+1];
        for(i=0; i<n; i++)
        {
            ans[i]=0;
        }
        for(i=0; i<n; i++)
        {
            if(i==0)
            {
                if(a[i]==a[n-1])
                {
                    while(a[i]!=a[i+1])
                    {
                        if(i%2==0)
                        {
                            ans[i]=1;
                        }
                        else
                        {
                            ans[i]=2;
                        }
                        i++;
                    }
                    if(i%2==0)
                    {
                        ans[i]=1;
                    }
                    else
                    {
                        ans[i]=2;
                    }
                }
            }
            else
            {
                if(a[i]!=a[i+1])
                {
                    while(a[i]!=a[i+1])
                    {
                        if(i%2==0)
                        {
                            ans[i]=1;
                        }
                        else
                        {
                            ans[i]=2;
                        }
                        i++;
                        if(i==(n-1))
                        {
                            break;
                        }
                    }
                    if(i%2==0)
                    {
                        ans[i]=1;
                    }
                    else
                    {
                        ans[i]=2;
                    }
                }
            }
        }
        if(ans[n-1]==0)
        {
            ans[n-1]=1;
        }
        if(ans[n-1])
        {
            c=ans[n-1];
            if(c==1)
            {
                c=2;
            }
            else
            {
                c=1;
            }
            if(ans[0]==0)
            {
                ans[0]=c;
                for(i=1; i<n; i++)
                {
                    if(ans[i])break;
                    if(c==1)
                    {
                        c=2;
                    }
                    else
                    {
                        c=1;
                    }
                    ans[i]=c;
                }
            }
        }
        cout<<2<<endl;
        for(i=0;i<n;i++)
        {
            if(ans[i]==0)ans[i]=1;
            cout<<ans[i]<<" ";
        }
    }
}
