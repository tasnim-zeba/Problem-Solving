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
        char a[n+1][n+1],v[n+1][n+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>a[i][j];
                v[i][j]=0;
            }
        }
        ll x1=1,y1=1,x2=1,y2=n,x3=n,y3=1,x4=n,y4=n;
        ll ans=0;
        while(1)
        {
           // cout<<ans<<endl;
            if(v[x1][y1])break;
            v[x1][y1]=v[x2][y2]=v[x3][y3]=v[x4][y4]=1;
            char c=max({a[x1][y1],a[x2][y2],a[x3][y3],a[x4][y4]});
            ans=ans+(ll)(c-a[x1][y1])+(ll)(c-a[x2][y2])+(ll)(c-a[x3][y3])+(ll)(c-a[x4][y4]);
            //cout<<ans<<endl;
            for(i=1; ;i++)
            {
                if(v[x1][y1+i])break;
                v[x1][y1+i]=v[x1+i][y1]=v[x2][y2-i]=v[x2+i][y2]=v[x3-i][y3]=v[x3][y3+i]=v[x4-i][y4]=v[x4][y4-i]=1;
                c=max({a[x1][y1+i],a[x2+i][y2],a[x3-i][y3],a[x4][y4-i]});
                char c1=max({a[x1+i][y1],a[x2][y2-i],a[x3][y3+i],a[x4-i][y4]});
                ans=ans+(ll)(c-a[x1][y1+i])+(ll)(c1-a[x1+i][y1])+(ll)(c1-a[x2][y2-i])+(ll)(c-a[x2+i][y2])+(ll)(c-a[x3-i][y3])+(ll)(c1-a[x3][y3+i])+(ll)(c1-a[x4-i][y4])+(ll)(c-a[x4][y4-i]);
                //cout<<ans<<endl;
            }
            x1++,y1++,x2++,y2--,x3--,y3++,x4--,y4--;
        }
        cout<<ans<<endl;
    }
}


