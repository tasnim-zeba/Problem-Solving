#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        else if(n==2)
        {
            if(a[1]>a[2])
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
            continue;
        }
        else
        {
            int f=1;
            for(i=1;i<n;i++)
            {
                if(a[i+1]<a[i])
                {
                    f=0;
                }
            }
            if(f)
            {
                cout<<0<<endl;
                continue;
            }
        }
        map<int,int>mp;
        c=n-1;
        mp[a[n]]=n;
        for(i=n-1;i>=1;i--)
        {
            if(a[i]<=a[i+1])
            {
                if(mp[a[i]])
                {
                    c=i-1;
                }
                else
                {
                     mp[a[i]]=i;
                     c=i-1;
                }
            }
            else
            {
                break;
            }
        }
        ///cout<<mp[7]<<endl;
        for(j=i;j>=1;j--)
        {
            if(mp[a[j]])
            {
                c=max(c,mp[a[j]]);
            }
        }
        map<int,int>mp1;
        for(i=1;i<=c;i++)
        {
            mp1[a[i]]++;
        }
        cout<<mp1.size()<<endl;
    }
}
