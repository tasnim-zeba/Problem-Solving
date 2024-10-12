#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,l,r,i,j,c,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<int,int>>v;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        int s=0;
        for(i=1;i<=n;)
        {
            c=0;
            l=i;
            if(a[i]==1)
            {
                while(a[i]==1)
                {
                    i++;
                    c++;
                }
                if(c%2==0)
                {
                    r=i-1;
                }
                else
                {
                    r=i-1;
                    s++;
                }
            }
            else if(a[i]==-1)
            {
                while(a[i]==-1)
                {
                    i++;
                    c++;
                }
                if(c%2==0)
                {
                    r=i-1;
                }
                else
                {
                    r=i-1;
                    s--;
                }
            }
            v.push_back({l,r});
        }
        if(s==0)
        {
            cout<<v.size()<<endl;
            for(i=0;i<v.size();i++)
            {
                cout<<v[i].first<<" "<<v[i].second<<endl;
            }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
