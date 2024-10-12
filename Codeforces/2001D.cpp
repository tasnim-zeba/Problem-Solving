#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        map<int,int>mp;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int>fnd(n+1, 0);
        vector<int>ans(n);
        int in=0;
        for(int i=1; i<=n; i++)
        {
            mp[a[i]]--;
            if(fnd[a[i]])continue;
            while(1)
            {
                if(in==0)
                {
                    ans[in]=a[i];
                    fnd[a[i]]=1;
                    in++;
                    break;
                }
                else if(in==1)
                {
                    if(a[i]>ans[0] && mp[ans[0]]>0)
                    {
                        fnd[ans[0]]=0;
                        fnd[a[i]]=1;
                        ans[0]=a[i];
                    }
                    else
                    {
                        ans[in]=a[i];
                        fnd[a[i]]=1;
                        in++;
                    }
                    break;
                }
                else
                {
                    if(in%2==0)
                    {
                        if(a[i]>ans[in-2] && mp[ans[in-2]] && mp[ans[in-1]]>0)
                        {
                            fnd[ans[in-2]]=0;
                            fnd[ans[in-1]]=0;
                            ans[in-2]=a[i];
                            fnd[a[i]]=1;
                            in-=2;
                        }
                        else if(a[i]<ans[in-1] && mp[ans[in-1]]>0)
                        {
                            fnd[ans[in-1]]=0;
                            fnd[a[i]]=1;
                            ans[in-1]=a[i];
                            fnd[a[i]]=1;
                            in--;
                        }
                        else
                        {
                            ans[in]=a[i];
                           fnd[a[i]]=1;
                            in++;
                            break;
                        }
                    }
                    else
                    {
                        if(a[i]<ans[in-2] && mp[ans[in-2]]>0 && mp[ans[in-1]])
                        {
                            fnd[ans[in-2]]=0;
                            fnd[ans[in-1]]=0;
                            ans[in-2]=a[i];
                            fnd[a[i]]=1;
                            in=in-2;
                        }
                        else if(a[i]>ans[in-1] && mp[ans[in-1]]>0)
                        {
                           fnd[ans[in-1]]=0;
                            fnd[a[i]]=1;
                            ans[in-1]=a[i];
                            fnd[a[i]]=1;
                            in--;
                        }
                        else
                        {
                            ans[in]=a[i];
                            fnd[a[i]]=1;
                            in++;
                            break;
                        }
                    }
                }
            }

        }
        cout<<mp.size()<<endl;
        for(int i=0; i<mp.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

