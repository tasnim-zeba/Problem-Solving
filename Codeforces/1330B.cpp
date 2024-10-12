#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,ans1,ans2,j1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        ans1=ans2=0;
        int c1,c2;
        map<int,int>mp;
        j=-1;
        for(i=1; i<=n; i++)
        {
            mp[a[i]]++;
            if(mp[a[i]]==2)
            {
                j=i;
                mp[a[i]]=1;
                break;
            }
        }
        if(j!=-1)
        {
            int k=j-1;
            c1=1;
            for(i=1; i<j; i++)
            {
                if(a[i]>k)
                {
                    c1=0;
                    break;
                }
            }
            ans1=0;
            if(c1)
            {
                mp.clear();
                c2=1;
                for(i=j; i<=n; i++)
                {
                    mp[a[i]]++;
                    if(mp[a[i]]==2||a[i]>(n-j+1))
                    {
                        c2=0;
                        break;
                    }
                }
                if(c2)
                {
                    ans1++;
                }
            }
        }
        mp.clear();
        j1=-1;
        for(i=n; i>=1; i--)
        {
            mp[a[i]]++;
            if(mp[a[i]]==2)
            {
                j1=i;
                mp[a[i]]=1;
                break;
            }
        }
        ans2=0;
        if(j1!=-1)
        {
            int u=1;
            //cout<<n-j1<<endl;
            for(i=n; i>j1; i--)
            {
                if(a[i]>(n-j1))
                {
                    u=0;
                    break;
                }
            }
           // cout<<u<<endl;
            //cout<<endl;
            if(u==1)
            {
                mp.clear();
                int o=1;
                for(i=j1; i>=1; i--)
                {
                    mp[a[i]]++;
                    if(mp[a[i]]==2||a[i]>j1)
                    {
                        o=0;
                        break;
                    }
                }
                if(o)
                {
                    ans2++;
                }
            }

        }
      ///  cout<<ans1<<" "<<ans2<<endl;
        if(ans1&&ans2)
        {
            cout<<2<<endl;
            cout<<j-1<<" "<<n-j+1<<endl;
            cout<<j1<<" "<<n-j1<<endl;
            continue;
        }
        else if(ans1)
        {
            cout<<1<<endl;
            cout<<j-1<<" "<<n-j+1<<endl;
            continue;
        }
        else if(ans2)
        {
            cout<<1<<endl;
            cout<<j1<<" "<<n-j1<<endl;
            continue;
        }
        else
        {
            cout<<0<<endl;
            continue;
        }
    }
}
