#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,x,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll p[n+1];
        x=0;
        for(i=0;i<n;i++)
        {
            cin>>p[i];
            if(x==0&&p[i]!=i)
            {
                q=p[i];
                x=1;
            }
            else if(p[i]!=i)
            {
                q=q&p[i];
            }
        }
        cout<<q<<endl;
    }
}
