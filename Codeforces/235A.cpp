#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    if(n<3)
    {
        cout<<n<<endl;
        return 0;
    }
   if(n%2)
   {
       cout<<n*(n-1)*(n-2)<<endl;
   }
   else
   {
       if(n%3)
       {
           cout<<n*(n-1)*(n-3)<<endl;
       }
       else
       {
           cout<<(n-1)*(n-2)*(n-3)<<endl;
       }
   }
}
