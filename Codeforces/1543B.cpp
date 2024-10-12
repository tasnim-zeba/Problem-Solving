#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,x,t,ans,j;
    cin>>t;
    while(t--)
    {
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0,j=n-1;i<(n/2);i++,j--)
    {
        ll d=a[j]-a[i];
        a[i]=a[i]+(d/2);
        a[j]=a[j]-(d/2);
    }
    map<int,int>m;
     map<int,int>:: iterator it;
    for(i=0;i<n;i++){
        m[a[i]]++;
    }
    ans=1;
    int c=0;
    for(it=m.begin();it!=m.end();it++){
        ///cout<<it->first<<" "<<it->second<<endl;
        ans=ans*it->second;
        c++;
    }
    if(c==1)
    {
        ans=ans*0;
    }
    cout<<ans<<endl;
    }
    return 0;
   /* cin>>n;
    map<int,int>m;
     map<int,int>:: iterator it;
    for(i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;*/
}
