#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int a[x+1];
        for(int i=0; i<x; i++)
        {
            cin>>a[i];
        }
        sort(a, a+x);
        int ans = x-2;
        vector<int>v;
        for(int i=0;i<x-1; i++)
        {
            if(a[i+1]==(a[i]+1))continue;
            v.push_back(a[i+1]-a[i]+1);
        }
        int extra = a[x-1]-a[0];
        extra = n-extra;
        extra++;
        if(extra>=3)v.push_back(extra);
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]%2==0)continue;
            if(v[i]==3)ans++;
            /*else if(v[i]==4 && y>0)
            {
                ans=ans+2;
                y--;
            }*/
            else if((v[i]/2)-1<=y)
            {
                ans = ans+v[i]-2;
                y=y-((v[i]/2)-1);
            }
            else{
                    ans = ans + (2*y);
                    y=0;
                    break;
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]%2)continue;
            /*else if(v[i]==4 && y>0)
            {
                ans=ans+2;
                y--;
            }*/
            else if((v[i]/2)-1<=y)
            {
                ans = ans+v[i]-2;
                y=y-((v[i]/2)-1);
            }
            else{
                    ans = ans + (2*y);
                    y=0;
                    break;
            }
        }
        cout<<ans<<endl;
    }
}

