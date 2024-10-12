#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans,k,j;
    cin>>n;
    ans=0;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            k=sqrt(i*i+j*j);
            if(k<=n&&(i*i+j*j==k*k))
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
