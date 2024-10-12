#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<string,int>mp;
        string a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]--;
        }
        x=0;
        vector<string>v;
        for(i=1;i<=n;i++)
        {
            if(mp[a[i]]==-1)
            {
                v.push_back(a[i]);
            }
            else if(mp[a[i]]<-1)
            {
                mp[a[i]]++;
                mp[a[i]]=mp[a[i]]*(-1);
                v.push_back(a[i]);
            }
            else if(mp[a[i]]>0)
            {
                string k=a[i];
                string h="";
                h=h+a[i][0]+a[i][1]+a[i][2];
                for(char j='0';j<'9';j++)
                {
                    if(mp[h+j]==0)
                    {
                        x++;
                       v.push_back(h+j);
                        mp[h+j]=1;
                        break;
                    }
                }
            }
        }
        cout<<x<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
    }
}
