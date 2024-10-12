#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s1,s2;
    ll n,i,j,p,m,q,p1,m1,x,y;
    cin>>s1>>s2;
    n=s1.size();
    p=m=q=p1=m1=0;
    for(i=0;i<n;i++)
    {
        if(s1[i]=='+')p1++;
        else m1++;
        if(s2[i]=='+')p++;
        else if(s2[i]=='-')m++;
        else q++;
    }
    double d;
    if(p>p1||m>m1)
    {
        d=0;
        cout<<fixed<<setprecision(12)<<d<<endl;
        return 0;
    }
    if(q==0)
    {
        d=1;
        cout<<fixed<<setprecision(12)<<d<<endl;
        return 0;
    }
    x=1;
    for(i=1;i<=q;i++)
    {
        x=x*2;
    }
    ll fact[11];
    fact[0]=1;
    for(i=1;i<=10;i++)
    {
        fact[i]=fact[i-1]*i;
    }
    ///cout<<fact[10]<<endl;
    y=fact[q];
    y=y/fact[abs(p-p1)];
    y=y/fact[abs(m-m1)];
    d=(double)y/x;
    cout<<fixed<<setprecision(12)<<d<<endl;
    return 0;
}
