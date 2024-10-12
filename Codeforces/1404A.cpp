#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,c0,c1,f,l;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        f=1;
        for(i=k;i<n;i++)
        {
            if(s[i%k]=='?'&&s[i]=='?');
            else if(s[i%k]!='?')
            {
                if(s[i]=='?')
                {
                    s[i]=s[i%k];
                }
                else
                {
                    if(s[i]!=s[i%k])
                    {
                        f=0;
                        break;
                    }
                }
            }
            else if(s[i]!='?')
            {
                if(s[i%k]=='?')
                {
                    s[i%k]=s[i];
                }
                else
                {
                    if(s[i]!=s[i%k])
                    {
                        f=0;
                        break;
                    }
                }
            }
        }
        c1=c0=0;
        for(i=0;i<k;i++)
        {
            if(s[i]=='0')c0++;
            else if(s[i]=='1')c1++;
        }
        if((c1>(k/2))||(c0>(k/2)))
        {
            f=0;
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
