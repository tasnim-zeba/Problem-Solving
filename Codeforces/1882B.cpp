#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<int> a[n+1];
        set<int>all,ans;
        for(i=0;i<n;i++)
        {
            cin>>k;
            for(j=0;j<k;j++)
            {
                int x;
                cin>>x;
                a[i].insert(x);
                all.insert(x);
            }
        }
        int res=0;
        for(auto x: all)
        {
            ans.clear();
            for(i=0;i<n;i++)
            {
                int f=0;
                for(auto y:a[i])
                {
                    if(y==x)
                    {
                        f=1;
                    }
                }
                if(f==0)
                {
                    for(auto y:a[i])
                    {
                        ans.insert(y);
                    }
                }
            }
            res=max(res,(int)ans.size());
        }
        cout<<res<<endl;
    }
}
