#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x;
        map<int,int>mp;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            for(j=2;j*j<=x;j++)
            {
                while(x%j==0)
                {
                    mp[j]++;
                    x=x/j;
                }
            }
            if(x>1)mp[x]++;
        }
        int f=1;
        for(auto c:mp)
        {
            if(c.second%n)
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
