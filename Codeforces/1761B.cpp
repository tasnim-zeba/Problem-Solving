#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>mp;
        for(i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        if(mp.size()==2)
        {
            cout<<n-(n/2)+1<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
}
