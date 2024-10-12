#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1],b[n+1],c[m+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        multiset<int>ms;
        for(i=0; i<m; i++)
        {
            cin>>c[i];
            ms.insert(c[i]);
        }
        vector<int>ans(m,-1);
        multimap<int,int>mmp1;
        multimap<int,int>mmp2;
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                mmp1.insert({b[i],i});
            }
            else
            {
                mmp2.insert({b[i],i});
            }
        }

        int w;
        int p=1;
        for(i=m-1; i>=0; i--)
        {
            if(mmp1.size()&&mmp2.size())
            {
                auto it=mmp1.find(c[i]);
                if(it==mmp1.end())
                {
                    auto it1=mmp2.find(c[i]);
                    if(it1==mmp2.end())
                    {
                        if(i==m-1)
                        {
                            p=0;
                            break;
                        }
                        else
                        {
                            ans[i]=w;
                        }
                    }
                    else
                    {
                        ans[i]=1+it1->second;
                        w=ans[i];
                        mmp2.erase(it1);
                    }
                }
                else
                {
                    ans[i]=1+it->second;
                    w=ans[i];
                    mmp1.erase(it);
                }
            }
            else if(mmp1.size())
            {
                auto it=mmp1.find(c[i]);
                if(it==mmp1.end())
                {
                    if(i==m-1)
                    {
                        p=0;
                        break;
                    }
                    else
                    {
                        ans[i]=w;
                    }
                }
                else
                {
                    ans[i]=1+it->second;
                    w=ans[i];
                    mmp1.erase(it);
                }
            }
             else if(mmp2.size())
            {
                auto it=mmp2.find(c[i]);
               // cout<<it->first<<" "<<it->second<<endl<<endl;
                if(it==mmp2.end())
                {
                    if(i==m-1)
                    {
                        p=0;
                        break;
                    }
                    else
                    {
                        ans[i]=w;
                    }
                }
                else
                {
                    ans[i]=1+it->second;
                    w=ans[i];
                    mmp2.erase(it);
                }
            }
            else
            {
                ans[i]=w;
            }
            if(p==0)break;
        }
        if(p==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(mmp1.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=0; i<m; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}





