#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,ans,i;
    int M=998244353;
    cin>>w>>h;
    ans=1;
    for(i=1;i<=(w+h);i++)
    {
        ans=(ans*2)%M;
    }
    cout<<ans<<endl;
    return 0;
}
