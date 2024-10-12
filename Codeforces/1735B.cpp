#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
       ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        x=a[0];
        y=2*x;
        y--;
        c=0;
        for(i=1;i<n;i++)
        {
            if(a[i]>y)
            {
                c=c+(a[i]/y);
                if(a[i]%y==0)
                {
                    c--;
                }
            }
        }
        cout<<c<<endl;
    }
}

