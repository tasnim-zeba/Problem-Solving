#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,k,i,j,r,d1,d2,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%20==19)
        {
            string s,s1,s2;
            s=to_string(n);
            s1=s2=s;
            a=b=0;
            for(i=0;i<s.size();i++)
            {
                ll d=(ll)(s[i]-'0');
                d1=d/2;
                d2=d-d1;
                if(d1>d2)swap(d1,d2);
                if(a>b)
                {
                    a=a+d1;
                    b=b+d2;
                    s1[i]='0'+d1;
                    s2[i]='0'+d2;
                }
                else
                {
                    b=b+d1;
                    a=a+d2;
                    s2[i]='0'+d1;
                    s1[i]='0'+d2;
                }
            }
            ll k1=stoll(s1);
            ll k2=stoll(s2);
            cout<<k1<<" "<<k2<<endl;
        }
        else
        {
            cout<<(n/2)<<" "<<n-(n/2)<<endl;
        }
    }
}
