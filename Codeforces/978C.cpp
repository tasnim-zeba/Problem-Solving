#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,s,s1;
    cin>>n>>m;
    ll a[n+1],b[m+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
    s=0;
    for(i=0,j=0;i<m;i++)
    {
        if(b[i]>s)
        {
            while(b[i]>s)
            {
                s1=s;
                s=s+a[j];
                j++;
            }
            cout<<j<<" "<<b[i]-s1<<endl;
        }
        else
        {
            cout<<j<<" "<<b[i]-s1<<endl;
        }
    }
    return 0;
}
