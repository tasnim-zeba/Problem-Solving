#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i,j;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int f1,f2,ans=INT_MAX;
        for(i=1;i<=1000000;i++)
        {
            int x=i-1;
            if(a%i==0)
            {
                x=x+(a/i);
            }
            else
            {
                x=x+(a/i)+1;
            }
            if(b%i==0)
            {
                x=x+(b/i);
            }
            else
            {
                x=x+(b/i)+1;
            }
            ans=min(ans,x);
        }
        cout<<ans<<endl;
    }
}
