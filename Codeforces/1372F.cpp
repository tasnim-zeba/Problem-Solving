#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,i,j;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        string s="";
        for(i=1;i<=a;i++)
        {
            s=s+'0';
        }
        if(!b&&a)s+='0';
        int g=ceil(b/2.0);
        ///cout<<g<<endl;
        for(i=1;i<=g;i++)
        {
            s+="01";
        }
        if(b==0&&c)s=s+'1';
        for(i=1;i<=c;i++)
        {
            s=s+'1';
        }
        if(b%2==0&&b)s+='0';
        cout<<s<<endl;
    }
}
