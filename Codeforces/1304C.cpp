#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q,n,m,i,j,t,l,h,pt,pl,ph,f;
    cin>>q;
    while(q--)
    {
        cin>>n>>m;
         pt=0,pl=m,ph=m;
         f=1;
         while(n--)
         {
             cin>>t>>l>>h;
             if(f==0)continue;
             ll d=t-pt;
             ll x,y;
             x=pl-d,y=ph+d;
             /// cout<<t<<" "<<x<<" "<<y<<endl;
             if((x>=l&&x<=h)||(y>=l&&y<=h)||(l>=x&&l<=y)||(h>=x&&h<=y))
             {
                 pt=t;
                 pl=max(x,l);
                 ph=min(y,h);
             }
             else
             {
                 f=0;
             }
             ///cout<<f<<endl;
            /// cout<<t<<" "<<pl<<" "<<ph<<endl;

         }
         if(f)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
    }
}
