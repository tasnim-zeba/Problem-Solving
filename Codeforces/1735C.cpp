#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,ans;
        cin>>s;
        map<int,int>mp;
        int vis[200];
        for(i=0; i<=200; i++)
        {
            vis[i]=0;
        }
        ans="";
        c=0;
        for(i=0; i<n; i++)
        {
            int x=(int)s[i];
            if(mp[x])
            {
                ans+=(char)(mp[x]);
            }
            else
            {
                for(j=97; j<=124; j++)
                {
                    if(j==x)continue;
                    if(vis[j]==0)
                    {
                        if(mp[j]&&c<25)
                        {
                            int l=j;
                            int g=0;
                            while(mp[l]!=0)
                            {
                                if(mp[l]==x)
                                {
                                    g=1;
                                    break;
                                }
                                l=mp[l];
                            }
                            if(g)continue;
                            else
                            {
                                mp[x]=j;
                                c++;
                                ans+=(char)(mp[x]);
                                vis[j]=1;
                                break;
                            }
                        }
                        else
                        {
                            mp[x]=j;
                            c++;
                            ans+=(char)(mp[x]);
                            vis[j]=1;
                            break;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}


