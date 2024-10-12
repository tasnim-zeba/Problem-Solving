#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,c,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=1,c=0;
        while(1)
        {
            if(n==1)
            {
                break;
            }
            if(n%6==0)
            {
                n=n/6;
                c++;
            }
            else{
               if(n%3==0)
               {
                   n=n*2;
                   c++;
               }
               else{
                f=-1;
                break;
               }

            }
        }
        if(f==-1)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    return 0;
}
