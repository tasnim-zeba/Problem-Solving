#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!='?')
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    cout<<'B';
                }
                else{
                    cout<<'R';
                }
            }
            cout<<endl;
        }
        else{
            int j;
            for(i=0;i<n;i++)
            {
            if(s[i]!='?')
            {
                j=i;
                break;
            }
            }
            for(i=j-1;i>=0;i--)
            {
                if(s[i]=='?')
                {
                    if(s[i+1]=='B')
                    {
                        s[i]='R';
                    }
                    else{
                        s[i]='B';
                    }
                }
            }
            for(i=j+1;i<n;i++)
            {
                if(s[i]=='?')
                {
                    if(s[i-1]=='B')
                    {
                        s[i]='R';
                    }
                    else{
                        s[i]='B';
                    }
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
