#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,n,k,i,j,r,l,u,d,x,y,tu;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2)
        {
            cout<<1<<" "<<3<<endl;
            cout<<4<<" "<<2<<endl;
            continue;
        }
        ll a[n+1][n+1];
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                a[i][j]=0;
            }
        }
        r=l=u=d=0;
        x=1,y=n*n;
        d=1;
        i=1,j=1;
        tu=1;
        while(1)
        {
            if(d==1)
            {
                if(i<=n)
                {
                    if(a[i][j])
                    {
                        i--;
                        j++;
                        if(a[i][j])break;
                        r=1;
                        d=0;
                        if(tu==1)
                        {
                            a[i][j]=x;
                            x++;
                            tu=2;
                        }
                        else
                        {
                            a[i][j]=y;
                            y--;
                            tu=1;
                        }
                        j++;
                    }
                    else
                    {
                        if(tu==1)
                        {
                            a[i][j]=x;
                            x++;
                            tu=2;
                        }
                        else
                        {
                            a[i][j]=y;
                            y--;
                            tu=1;
                        }
                        i++;
                    }
                }
                else
                {
                    i--;
                    j++;
                    r=1;
                    d=0;
                    if(tu==1)
                    {
                        a[i][j]=x;
                        x++;
                        tu=2;
                    }
                    else
                    {
                        a[i][j]=y;
                        y--;
                        tu=1;
                    }
                    j++;
                }
            }
            else if(r==1)
            {
                if(j<=n)
                {
                    if(a[i][j])
                    {
                        i--;
                        j--;
                        if(a[i][j])break;
                        r=0;
                        u=1;
                        if(tu==1)
                        {
                            a[i][j]=x;
                            x++;
                            tu=2;
                        }
                        else
                        {
                            a[i][j]=y;
                            y--;
                            tu=1;
                        }
                        i--;
                    }
                    else
                    {
                        if(tu==1)
                        {
                            a[i][j]=x;
                            x++;
                            tu=2;
                        }
                        else
                        {
                            a[i][j]=y;
                            y--;
                            tu=1;
                        }
                        j++;
                    }
                }
                else
                {
                    i--;
                    j--;
                    u=1;
                    r=0;
                    if(tu==1)
                    {
                        a[i][j]=x;
                        x++;
                        tu=2;
                    }
                    else
                    {
                        a[i][j]=y;
                        y--;
                        tu=1;
                    }
                    i--;
                }
            }
            else if(u==1)
            {
                if(i>=1)
                {
                    if(a[i][j])
                    {
                        i++;
                        j--;
                        if(a[i][j])break;
                        u=0;
                        l=1;
                        if(tu==1)
                        {
                            a[i][j]=x;
                            x++;
                            tu=2;
                        }
                        else
                        {
                            a[i][j]=y;
                            y--;
                            tu=1;
                        }
                        j--;
                    }
                    else
                    {
                        if(tu==1)
                        {
                            a[i][j]=x;
                            x++;
                            tu=2;
                        }
                        else
                        {
                            a[i][j]=y;
                            y--;
                            tu=1;
                        }
                        i--;
                    }
                }
                else
                {
                    i++;
                    j--;
                    l=1;
                    u=0;
                    if(tu==1)
                    {
                        a[i][j]=x;
                        x++;
                        tu=2;
                    }
                    else
                    {
                        a[i][j]=y;
                        y--;
                        tu=1;
                    }
                    j--;
                }
            }
              else if(l==1)
            {
                if(j>=1)
                {
                    if(a[i][j])
                    {
                        i++;
                        j++;
                        if(a[i][j])break;
                        l=0;
                        d=1;
                        if(tu==1)
                        {
                            a[i][j]=x;
                            x++;
                            tu=2;
                        }
                        else
                        {
                            a[i][j]=y;
                            y--;
                            tu=1;
                        }
                        i++;
                    }
                    else
                    {
                        if(tu==1)
                        {
                            a[i][j]=x;
                            x++;
                            tu=2;
                        }
                        else
                        {
                            a[i][j]=y;
                            y--;
                            tu=1;
                        }
                        j--;
                    }
                }
                else
                {
                    i++;
                    j++;
                    d=1;
                    l=0;
                    if(tu==1)
                    {
                        a[i][j]=x;
                        x++;
                        tu=2;
                    }
                    else
                    {
                        a[i][j]=y;
                        y--;
                        tu=1;
                    }
                    i++;
                }
            }
        }
         for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
         cout<<endl;
    }
}


