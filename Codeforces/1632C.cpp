#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,a1,b1,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int ans=INT_MAX;
        for(a1=a;a1<=b;a1++)
        {
            b1=0;
            for(i=20;i>=0;i--)
            {
                if(b&(1<<i))
                {
                    b1=b1+(1<<i);
                }
                else if(a1&(1<<i))
                {
                    b1=b1+(1<<i);
                    break;
                }
            }
            ans=min(ans,a1+(a1|b1));
        }
        ans=ans+(1-a-b);
        cout<<min(ans,b-a)<<endl;
    }
}
