#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10002];
int main()
{
    ll t,q,d,i,x,c,p;
    cin>>t;
    while(t--)
    {
        cin>>q>>d;
        for(i=0;i<q;i++)
        {
            cin>>a[i];
            if(a[i]%100==0)
            {
                p=a[i]%1000;
                if(p%d==0)
                {
                    cout<<"YES"<<endl;
                }
                else{
                     cout<<"NO"<<endl;
                }

            }
            else{
                 x=a[i]%100;
            c=0;
           while(x>0)
           {
               if(x%d==0)
               {
                   c=1;
                   break;
               }
               x=x-10;
           }
           if(c==1)
           {
               cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
            }
        }

    }
    return 0;
}
