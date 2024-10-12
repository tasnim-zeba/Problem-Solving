#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<int>need;
        set<int>::iterator it;
        for(i=1;i<=n;i++)
        {
            need.insert(i);
        }
        vector<int>rem;
        while(n--)
        {
            cin>>x;
            if(need.count(x))
            {
                need.erase(x);
            }
            else{
                rem.push_back(x);
            }
        }
        sort(rem.begin(),rem.end());
        int f=1;
        int ans=need.size();
        for(i=0;i<rem.size();i++)
        {
            p=(rem[i]-1)/2;
            it=need.begin();
            if(*it>p)
            {
                f=0;
                break;
            }
            else{
                need.erase(*it);
            }
        }
        if(f)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
