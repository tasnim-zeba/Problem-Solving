#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j,s,c,tc;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]=pow(10,a[i]);
        }
        s=c=tc=0;
        for(i=0;i<n;i++)
        {
            tc=0;
            if(i==(n-1))
            {
                s=s+(k-c+1)*a[i];
            }
            else
            {
                if(c<=k)
                {
                   /// c=c+min((k-c+1),((a[i+1]/a[i])-1));
                   if((c+((a[i+1]/a[i])-1))>(k+1))
                   {
                       tc=(k-c)+1;
                        c=c+(k-c)+1;
                   }
                   else
                   {
                        c=c+((a[i+1]/a[i])-1);
                        tc=((a[i+1]/a[i])-1);
                   }
                    s+=tc*a[i];
                    if(c>k)
                    {
                        break;
                    }
                }
            }
        }
        cout<<s<<endl;
    }
}
