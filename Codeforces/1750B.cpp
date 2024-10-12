#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c1,c2,tc1,tc2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str;
        cin>>str;
        c1=c2=0LL;
        for(i=0;i<n;i++)
        {
            if(str[i]=='0')
                c2++;
            else
             c1++;
        }
        tc1=tc2=0LL;
        ll c=0LL;
        for(i=0;i<n;)
        {
            if(str[i]=='0')
            {
                c=0;
                while(str[i]=='0')
                {
                    i++;
                    c++;
                    if(i==n)break;
                }
                tc2=max(tc2,c);
            }
            else if(str[i]=='1')
            {
                c=0;
                while(str[i]=='1')
                {
                    i++;
                    c++;
                    if(i==n)break;
                }
                tc1=max(tc1,c);
            }
        }
        cout<<max(c2*c1,max(tc2*tc2,tc1*tc1))<<endl;
    }
    return 0;
}
