#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],b[n+1];
        map<int,int>mp;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=-1;
            mp[a[i]]++;
        }
        int c=0,x,y;
        for(auto it:mp)
        {
            if(it.second>=2)
            {
                c++;
                if(c==1)x=it.first;
                else if(c==2)y=it.first;
                //cout<<x<<" "<<y<<endl;
            }
        }
        if(c<2)
        {
            cout<<-1<<endl;
        }
        else
        {
            int f1,f2;
            f1=1;
            f2=2;
            for(i=1;i<=n;i++)
            {
                if(a[i]==x)
                {
                    b[i]=f1;
                    if(f1==1)f1=2;
                }
                if(a[i]==y)
                {
                    b[i]=f2;
                    if(f2==2)f2=3;
                }
            }
            for(i=1;i<=n;i++)
            {
                if(b[i]==-1)
                b[i]=1;
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
}
