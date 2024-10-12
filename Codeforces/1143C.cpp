#include<bits/stdc++.h>
using namespace std;
int c[100006],d[100006];
int main()
{
    int n,i,j,p,r;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p>>c[i];
        if(p!=-1)
        if(c[i]==0)d[p]=1;
    }
    int o=0;
    for(i=1; i<=n; i++)
    {
        if(c[i]==1&&d[i]==0)
        {
            cout<<i<<" ";
            o=1;
        }
    }
    if(o==0)
    {
        cout<<-1;
    }
    cout<<endl;
}
