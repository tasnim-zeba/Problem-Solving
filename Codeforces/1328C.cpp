#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string x,s1,s2;
        cin>>x;
        c=0;
        s1="1";
        s2="1";
        for(i=1;i<n;i++)
        {
            if(x[i]=='0')
            {
                s1+='0';
                s2+='0';
            }
            else if(x[i]=='1')
            {
                if(c==0)
                {
                    s1+='1';
                    s2+='0';
                    c++;
                }
                else
                {
                    s1+='0';
                    s2+='1';
                }
            }
            else if(x[i]=='2')
            {
                if(c>0)
                {
                    s1+='0';
                    s2+='2';
                }
                else
                {
                    s1+='1';
                    s2+='1';
                }
            }
        }
        cout<<s1<<endl;
        cout<<s2<<endl;
    }
}
