#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll e,n,m,i,j,c1,c2;
    cin>>e;
    while(e--)
    {
        cin>>n>>m;
        char s1[n+1][m+1];
        c1=INT_MIN;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
            cin>>s1[i][j];
            }
        }
        c1=INT_MIN;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
            if(s1[i][j]=='R'){
            c1=j;
            break;
            }
            }
            if(c1!=INT_MIN)
            break;
        }
        c2=INT_MAX;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
            if(s1[i][j]=='R'){
            c2=min(c2,j);
            }
            }
        }
        if(c1==INT_MIN||c2<c1)
        {
        cout<<"NO"<<endl;
        }
        else
        {
        cout<<"YES"<<endl;
        }
    }
}
