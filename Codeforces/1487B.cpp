#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,c,ans,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        k--;
        if(n%2==0)
        {
            ans=k%n;
            /*if(ans==0)
            {
                ans=n;
            }*/
        }
        else{
            /*if(k%n==0)
            {
                c--;
            }*/
            x=(n/2);
            c=k/x;
            ans=(k+c)%n;
           /* if(ans==0)
            {
                ans=n;
            }*/
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
