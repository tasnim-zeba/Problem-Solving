#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,k,pa;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll p[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>p[i];
        }
        if(n%2)
        {
            x=n/2;
            x++;
            for(i=1; i<=n; i++)
            {
                if(p[i]==x)
                {
                    k=i;
                    break;
                }
            }
            ll l,r;
            l=x-1;
            r=x+1;
            ll f1,f2;
            f1=f2=0;
            pa=1;
            for(i=k-1,j=k+1; i>=1||j<=n;)
            {
                if(i<1&&f1==0)break;
                if(j>n&&f2==0)break;
                if(f1==1&&f2==1)
                {
                    pa=pa+2;
                    f1=f2=0;
                    l--;
                    r++;
                    continue;
                }
                if(f1);
                else if(p[i]==l)
                {
                    f1=1;
                    i--;
                }
                else if(f1==0)
                {
                    i--;
                }
                if(f2);
                    else if(p[j]==r)
                    {
                        f2=1;
                        j++;
                    }
                    else if(f2==0)
                    {
                        j++;
                    }
            }
            if(f1==1&&f2==1)
            {
                pa=pa+2;

            }
            cout<<(n-pa)/2<<endl;
        }
        else
        {
            x=n/2;
            for(i=1; i<=n; i++)
            {
                if(p[i]==x)
                {
                    k=i;
                    break;
                }
            }
            ll l,r;
            l=x;
            r=x+1;
            ll f1,f2;
            f1=f2=0;
            pa=0;
            ///cout<<l<<" "<<r<<endl;
            for(i=k,j=k+1; i>=1||j<=n;)
            {
                if(i<1&&f1==0)break;
                if(j>n&&f2==0)break;
                if(f1==1&&f2==1)
                {
                    pa=pa+2;
                    f1=f2=0;
                    l--;
                    r++;
                    continue;
                }
                if(f1);
                else if(p[i]==l)
                {
                    f1=1;
                    i--;
                }
                else if(f1==0)
                {
                    i--;
                }
                if(f2);
                    else if(p[j]==r)
                    {
                        f2=1;
                        j++;
                    }
                    else if(f2==0)
                    {
                        j++;
                    }

            }
            if(f1==1&&f2==1)
            {
                pa=pa+2;

            }
            cout<<(n-pa)/2<<endl;
        }
    }
}

