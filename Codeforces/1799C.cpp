#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        string s,a="",b="";
        cin>>s;
        n=s.size();
        map<char,int>mp;
        for(i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        int f=0;
        for(auto it:mp)
        {
            if(f==0)
            {
                int x=(it.second)/2;
                while(x--)
                {
                    a=a+it.first;
                    b=b+it.first;
                }
                if(it.second%2)
                {
                    b=b+it.first;
                    f=1;
                }
            }
            else
            {
                int x=it.second;
                while(x--)
                {
                    a=a+it.first;
                }
            }

        }
        reverse(b.begin(),b.end());
        string ans=a+b;
        cout<<ans<<endl;

    }
}
