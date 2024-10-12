#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,l,m,x,y,j,c,tc;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s[n+1];
        m=0;
        for(i=1; i<=n; i++)
        {
            cin>>s[i];
        }
        for(char ch='a'; ch<='e'; ch++)
        {
            c=0;
            tc=0;
            vector<int>v;
            for(i=1; i<=n; i++)
            {
                x=0;
                for(j=0; j<s[i].size(); j++)
                {
                    if(s[i][j]==ch)
                    {
                        x++;
                    }
                }
                y=s[i].size()-x;
                if(x>=y)
                {
                    tc=tc+(x-y);
                    c++;
                }
                else
                {
                    v.push_back(y-x);
                }
            }
            tc--;
            if(tc<0)
            {
                c=0;
            }
            else
            {
                sort(v.begin(),v.end());
                ll l=0;
                for(i=0; i<v.size(); i++)
                {
                    if(v[i]<=tc)
                    {
                        c++;
                        tc=tc-v[i];
                    }
                    else
                    {
                        break;
                    }
                }
            }

            m=max(m,c);
        }
        cout<<m<<endl;
    }
}

