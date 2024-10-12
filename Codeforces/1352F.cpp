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
        for(i=1; i<=(b/2); i++)
            {
                s+="10";
            }
            for(i=1; i<=a; i++)
            {
                s+='0';
            }
            if(b==0||b==1)
            {
                s+='0';
            }
            for(i=1; i<=c+1; i++)
            {
                s+='1';
            }
            if(b%2&&b!=1)
            s+='0';
            cout<<s<<endl;
    }
}
