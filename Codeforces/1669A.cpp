#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,n,i,c,s,r,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        c=1,r=0,b=0;
        for(i=0;i<n;)
        {
            if(s[i]=='R'||s[i]=='B')
            {
                r=0,b=0;
                while(s[i]=='R'||s[i]=='B')
                {
                    if(s[i]=='R')
                    {
                        r++;
                    }
                    else
                    {
                        b++;
                    }
                    i++;
                    if(i==n)
                    {
                        break;
                    }
                }
                if(r==0||b==0)
                {
                    c=0;
                    break;
                }
            }
            else
            {
                i++;
            }
            if(c==0)
            {
                break;
            }

        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
