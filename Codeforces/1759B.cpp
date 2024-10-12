#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,m,s,c,mx;
    cin>>t;
    while(t--)
    {
        cin>>m>>s;
        int a[m+1];
        mx=0;
        c=0;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        int v[205];
        for(i=1;i<=200;i++)
        {
            v[i]=0;
        }
        for(i=0;i<m;i++)
        {
            v[a[i]]=1;
        }
        int f=0;
        c=0;
        for(i=1;i<=200;i++)
        {
            if(c>=s)break;
            if(v[i]==0)
            {
                c=c+i;
                v[i]=1;
            }
            else
            {
                continue;
            }
            if(c==s)
            {
                int h=max(mx,i);
                int y=1;
                for(j=1;j<=h;j++)
                {
                    if(v[j]==0)y=0;
                }
                if(y)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

