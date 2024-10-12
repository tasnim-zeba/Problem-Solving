#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        priority_queue<int,vector<int>,greater<int> >pq;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            pq.push(i);
        }
        vector<int>ans;
        vector<int>che;
        c=-1;
        for(i=1;i<=n;)
        {
            vector<int>v;
            int x=pq.top();
            pq.pop();
            for(j=i;j<=n;j++)
            {
                if(a[j]==x)
                {
                    c++;
                    ans.push_back(x);
                    che.push_back(c);
                    for(k=0;k<v.size();k++)
                    {
                         c++;
                         ans.push_back(v[k]);
                         if(v[k]==pq.top())
                         {
                             pq.pop();
                         }
                    }
                    v.clear();
                    i=j+1;
                    break;
                }
                else
                {
                    v.push_back(a[j]);
                }
            }
        }
        for(i=0;i<che.size();i++)
        {
            if(che[i])
            {
                if(ans[che[i]]<ans[che[i]-1])
                {
                    swap(ans[che[i]],ans[che[i]-1]);
                }
               // cout<<che[i]<<" ";
            }
        }
        ///cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
