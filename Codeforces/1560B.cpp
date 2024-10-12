#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ll m=abs(a-b);
       /* if(m==1)
        {
            if((a==1&&b==2)||(a==2&&b==1))
            {
                if(c==1)
                {
                    cout<<2<<endl;
                }
                else if(c==2)
                {
                    cout<<1<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else*/ if(max(a,b)>2*m)
        {
            cout<<-1<<endl;
        }
        else if(c>2*m)
        {
            cout<<-1<<endl;
        }
        else
        {
            if((c+m)>2*m)
            {
                cout<<c-m<<endl;
            }
            else
            {
                cout<<c+m<<endl;
            }
        }
    }
    return 0;
}
