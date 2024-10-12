#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,sx,sy,fx,fy,t;
    cin>>n>>m>>k;
    while(k--)
    {
        cin>>sx>>sy;
        cin>>fx>>fy;
    }
    string s="";
    for(i=1;i<=n-1;i++)s=s+'U';
    for(i=1;i<=m-1;i++)s=s+'L';
    j=0,t=0;
    while(1)
    {
        if(j==n)break;
        if(t==0){
            for(i=1;i<=m-1;i++)s=s+'R';
            t++;
            j++;
            if(j<n)s=s+'D';
        }
        else
        {
            for(i=1;i<=m-1;i++)s=s+'L';
            t=0;
            j++;
            if(j<n)s=s+'D';
        }
    }
    cout<<s.size()<<endl;
    cout<<s<<endl;
}
