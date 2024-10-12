#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m,x,y,i,j;
    string s;
    cin>>s;
    n=s.size();
    ll a[n+1];
    a[0]=0;
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            a[i]=1;
        }
        else
        {
            a[i]=0;
        }
    }
    ///cout<<a[0]<<" ";
    for(i=1;i<n;i++)
    {
        a[i]=a[i-1]+a[i];
        ///cout<<a[i]<<" ";
    }
    cin>>m;
    while(m--)
    {
        cin>>x>>y;
        x--;
        y--;
        cout<<a[y]-a[x]<<endl;

    }
    return 0;
}
