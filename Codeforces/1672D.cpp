#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int c=0;
        i=0,j=0;
        multiset<ll>mp;
        for(i=0;i<n;i++)
        {
            if(a[i]==b[j])
            {
                j++;
            }
            else
            {
                if(i>0&&a[i-1]==b[j]&&mp.find(b[j])!=mp.end())
                {
                    mp.erase(mp.find(b[j]));
                    j++;
                    i--;
                }
                else
                {
                    mp.insert(a[i]);
                }
            }
        }
        while(j<n&&a[n-1]==b[j]&&mp.find(b[j])!=mp.end())
        {
            mp.erase(mp.find(b[j]));
            j++;
        }
        if(j==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
