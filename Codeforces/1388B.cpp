#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
int main()
{
    ll t,n,i,c,ans,x;
    c=0;
    for(i=1;i<=100005;i++)
    {
        if(i%4==1)
        {
            c++;
        }
        a[i]=c;
    }
   /* for(i=1;i<=20;i++)
    {
        cout<<a[i]<<" ";
    }*/
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n;
       for(i=x;i>=1;i--)
        {
            if(i<=a[n])
            {
                cout<<8;
            }
            else{
                 cout<<9;
            }

        }
        cout<<endl;
    }
    return 0;
}
