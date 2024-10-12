#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j;
    cin>>n>>x;
    int a[n+1];
    map<int,int>mp;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(i=1;i<x;i++)
    {
        if(mp[i]%(i+1)==0)
        {
            mp[i+1]+=mp[i]/(i+1);
            mp[i]=0;
        }
    }
    for(i=1;i<x;i++)
    {
       if(mp[i])
       {
           cout<<"No"<<endl;
           return 0;
       }
    }
    cout<<"Yes"<<endl;
    return 0;
}
