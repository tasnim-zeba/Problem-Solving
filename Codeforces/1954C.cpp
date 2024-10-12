#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,x,y,i;
    cin>>t;
    while(t--)
    {
       string x,y;
       cin>>x>>y;
       ll n=x.size();
       int f=0;
       for(i=0; i<n; i++){
            if(x[i]==y[i])continue;
            if(f==0)
            {
                f=1;
                if(x[i]>y[i])swap(x,y);
            }
            else if(x[i]<y[i])swap(x[i],y[i]);
       }
       cout<<x<<endl;
       cout<<y<<endl;
    }
}
