#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1];
    map<int,int>mp;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int mx=0,x=a[1];
    for(i=1;i<=n;i++)
    {
        mp[a[i]]=mp[a[i]-1]+1;
        if(mp[a[i]]>mx)
        {
            mx=mp[a[i]];
            x=a[i];
        }
    }
    cout<<mx<<endl;
    vector<int>v;
    for(i=x-(mx-1);i<=x;i++)
    {
        v.push_back(i);
    }
    for(i=1,j=0;i<=n;i++)
    {
        if(a[i]==v[j])
        {
            cout<<i<<" ";
            j++;
        }
    }
    cout<<endl;
}
