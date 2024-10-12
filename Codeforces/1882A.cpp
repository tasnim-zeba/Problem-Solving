#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans=1;
        for(i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(x==ans)
            {
                ans++;
            }
            ans++;
        }
        cout<<ans-1<<endl;
    }
}
