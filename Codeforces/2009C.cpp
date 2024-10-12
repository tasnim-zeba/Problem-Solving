#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll x,y,k;
       cin>>x>>y>>k;
       ll d1 = x/k;
       if(x%k)d1++;
       ll d2 = y/k;
       if(y%k)d2++;
       if(d1>d2)
       {
           cout<<d1+(d1-1)<<endl;
       }
       else{
            cout<<d2+d2<<endl;
       }
    }
}


