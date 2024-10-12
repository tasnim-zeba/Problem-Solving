#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,r,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        r=l=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='R')r++;
            else l++;
        }
        if(r==0||l==0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                r=i;
                break;
            }
        }
        int f=0;
        for(i=r+1;i<n;i++)
        {
            if(s[i]=='L')f=1;
        }
        if(f==1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<r<<endl;
        }
    }
}
