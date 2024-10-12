#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,x;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    s=0;
    map<int,int>mp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=a[i]+a[j];
            mp[x]++;
            s=max(s,mp[x]);
        }
    }
    cout<<s<<endl;
    return 0;
}
