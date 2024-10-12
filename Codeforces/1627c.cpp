#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,u,v,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int n1=n-1;
        n--;
        map<int,int>mp;
        map<int,int>::iterator it;
        while(n--)
        {
            cin>>u>>v;
            mp[u]++;
            mp[v]++;
        }
        int c=1;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if((it->second)>2)
            {
                c=0;
                break;
            }
        }
        if(c==0)
        {
            cout<<-1<<endl;
        }
        else{
            for(i=0;i<n1;i++)
            {
                if(i%2==0)
                {
                    cout<<11<<" ";
                }
                else{
                    cout<<2<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
