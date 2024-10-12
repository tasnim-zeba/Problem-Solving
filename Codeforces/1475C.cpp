#include<bits/stdc++.h>
using namespace std;
long long bo[200005],gi[200005];
int main()
{
    long long t,a,b,k,i,j,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        long long c1[a+1]={0},c2[b+1]={0};
        for(i=0;i<k;i++)
        {
            cin>>bo[i];
            c1[bo[i]]++;
        }
        for(i=0;i<k;i++)
        {
            cin>>gi[i];
            c2[gi[i]]++;
        }
        ans=0;
        for(i=0;i<k;i++)
        {
            ans=ans+k-(c1[bo[i]]+c2[gi[i]])+1;
        }
        cout<<ans/2<<endl;
    }
    return 0;
}
