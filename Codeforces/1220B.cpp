#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j;
    cin>>n;
    ll a[n+1];
    ll m[n+1][n+1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==1)
        {
            a[1]=(m[1][0]*m[1][2])/m[0][2];
            a[1]=sqrt(a[1]);
        }
        else if(i==2)
        {
            a[2]=(m[0][2]*m[1][2])/m[0][1];
            a[2]=sqrt(a[2]);
        }
        else
        {
            a[i]=(m[i][1]*m[i][2])/m[1][2];
            a[i]=sqrt(a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
