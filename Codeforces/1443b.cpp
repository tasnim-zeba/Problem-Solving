#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,i,j,c,f,c1,c2,p;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>a>>b;
        cin>>s;
        f=0;
        c=0;
        c1=c2=0;
        for(i=0;i<s.size();)
        {
            if(s[i]=='1'&&f!=1)
            {
                while(s[i]=='1')
                {
                    i++;
                }
                c1=a;
                f=1;
                c=c+a;
            }
            else if(s[i]=='1'&&f==1)
            {
                while(s[i]=='1')
                {
                    i++;
                }
                c=c+min(c2,a);
                ///f=0;
            }
            else if(s[i]=='0')
            {
                p=0;
                while(s[i]=='0')
                {
                    i++;
                    p++;
                }
                c2=p*b;
            }

        }
        cout<<c<<endl;
    }
    return 0;
}
