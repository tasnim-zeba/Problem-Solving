#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n+1];
        vector<vector<int>>v(n+1);
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            v[a[i]].push_back(i);
        }
        int c=0;
        int ans[n+1];
        for(i=0; i<v.size(); i++)
        {
            if(v[i].size()>=k)
            {
                for(j=0; j<v[i].size(); j++)
                {
                    if((j+1)>k)
                    {
                        ans[v[i][j]]=0;
                        c++;
                    }
                    else
                    {
                        ans[v[i][j]]=j+1;
                        c++;
                    }
                }
            }
        }
        int y=(n-c)%k;
        p=0;
        if(y==0)
        {
            p=1;
        }
        for(i=0; i<v.size(); i++)
        {
            if(v[i].size()>=k);
            else
            {
                for(j=0; j<v[i].size(); j++)
                {
                    if(p)
                    {
                        if(p>k)
                        {
                            p=1;
                        }
                        ans[v[i][j]]=p;
                        p++;
                    }
                    else
                    {
                        ans[v[i][j]]=0;
                        y--;
                        if(y==0)
                        {
                            p=1;
                        }
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
