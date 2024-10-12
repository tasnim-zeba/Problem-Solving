#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,k,i,c,x,y,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        a=b=x=y=0;
        for(i=1; i<=k; i++)
        {
            cin>>c;
            if((c/n)>=2)a=a+(c/n);
            if((c/n)>=3)x=1;
            if((c/m)>=2)b=b+(c/m);
            if((c/m)>=3)y=1;
        }
        if((n%2==0&&b>=n)||(n%2==1&&b>=n&&y==1)||(m%2==0&&a>=m)||(m%2==1&&a>=m&&x==1))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
