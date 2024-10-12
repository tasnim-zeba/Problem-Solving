#include<bits/stdc++.h>
using namespace std;
int func(multiset<int>ms,int k)
{
    int i;
    for(i=1; i<=k; i++)
    {
        if(ms.empty())
        {
            return 0;
        }
        int x=k-i+1;
        auto it=ms.upper_bound(x);
        if(it==ms.begin())
        {
            return 0;
        }
        else
        {
            it--;
            ms.erase(it);
        }
        if(!ms.empty())
        {
            it=ms.begin();
            int y=*it;
            ms.erase(it);
            y=y+x;
            ms.insert(y);
        }
    }
    return 1;
}
int main()
{
    int t,n,i,x,y,k,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        multiset<int>ms;
        for(i=1; i<=n; i++)
        {
            cin>>x;
            ms.insert(x);
        }
        int k=0;
        int ans=n;
        for(i=1; i<=n; i++)
        {
            f=0;
            f=func(ms,i);
            if(f==0)
            {
                ans=i-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
