#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,k,p,ne,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        k=0,p=0,ne=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                k++;
            }
            else if(a[i]>0)
            {
                p++;
                x=a[i];
            }
            else if(a[i]<0)
            {
                ne++;
                y=abs(a[i]);
            }
        }
        if(k==n||k==(n-1))
        {
            cout<<"YES"<<endl;
        }
        else if(p==1&&ne==1&&x==y)
        {
             cout<<"YES"<<endl;
        }
        else if(n==3)
        {
            ll d=(a[0]+a[1]+a[2]);
            if(d==a[0]||d==a[1]||d==a[2])
            {
                 cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(n==4)
        {
            sort(a,a+n);
            if((a[0]+a[3])==0&&(a[1]+a[2])==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
