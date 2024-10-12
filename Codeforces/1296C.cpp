#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x,y,ans;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n;
        cin>>s;
        s=" "+s;
        map<pair<int,int>,int>mp;
        ans=INT_MAX;
        x=y=0;
        int l,r;
        for(i=0; i<=n; i++)
        {
            if(s[i]=='L')x--;
            else if(s[i]=='R')x++;
            else if(s[i]=='U')y--;
            else if(s[i]=='D')y++;
            if(mp[ {x,y}])
            {
                int d=i-mp[ {x,y}];
                if(d<ans)
                {
                    ans=d-1;
                    l=mp[ {x,y}];
                    r=i;
                }
            }
            mp[ {x,y}]=i+1;
        }
        if(ans==INT_MAX)cout<<-1<<endl;
        else
        cout<<l<<" "<<r<<endl;
    }
}
