#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, i,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char a[n+1][m+1];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        ll mxlen=0, row;
        for(i=0; i<n; i++)
        {
            ll len=0;
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='#')len++;
            }
            if(len>mxlen){
                mxlen=len;
                row=i;
            }
        }
        ll x=0;
        for(i=0; i<m; i++)
        {
            if(a[row][i]=='#')
            {
                if(x==(mxlen/2))break;
                x++;
            }
        }
        cout<<row+1<<" "<<i+1<<endl;
    }
}



