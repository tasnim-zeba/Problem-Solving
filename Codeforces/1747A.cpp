#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c1,c2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c1=c2=0;
        while(n--)
        {
            int x;
            cin>>x;
            if(x<0)
            {
                c1=c1+x;
            }
            else
            {
                c2=c2+x;
            }
        }
        c1=abs(c1);
        cout<<abs(c1-c2)<<endl;
    }
}
