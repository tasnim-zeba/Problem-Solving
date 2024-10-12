#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll calc(string s)
{
    ll n=s.size();
    ll sum=0,i;
    for(i=0;i<n-1;i++)
    {
        if(s[i]=='0'&&s[i+1]=='1')
        {
            sum++;
        }
        else if(s[i]=='1'&&s[i+1]=='1')
        {
            sum+=11;
        }
        else if(s[i]=='1'&&s[i+1]=='0')
        {
            sum+=10;
        }
    }
    return sum;
}
int main()
{
    ll t,n,k,i,j,x,y,nx,ny;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        x=-1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                x=i;
                nx=i;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                y=i;
                ny=n-y-1;
                break;
            }
        }
        if(x==-1)
        {
            cout<<calc(s)<<endl;
        }
        else if(x==y)
        {
            if(nx<=k&&ny<=k)
            {
                string s1,s2;
                s1=s;
                s2=s;
                s1[x]='0';
                s1[0]='1';
                s2[y]='0';
                s2[n-1]='1';
                cout<<min(calc(s1),calc(s2))<<endl;
            }
            else if(nx<=k)
            {
                string s1;
                s1=s;
                s1[x]='0';
                s1[0]='1';
                cout<<calc(s1)<<endl;
            }
            else if(ny<=k)
            {
                string s1;
                s1=s;
                s1[y]='0';
                s1[n-1]='1';
                cout<<calc(s1)<<endl;
            }
            else
            {
                cout<<calc(s)<<endl;
            }
        }
        else
        {
            if((nx+ny)<=k)
            {
                string s1;
                s1=s;
                s1[x]='0';
                s1[0]='1';
                s1[y]='0';
                s1[n-1]='1';
                cout<<calc(s1)<<endl;
            }
            else if(nx<=k&&ny<=k)
            {
                string s1,s2;
                s1=s;
                s2=s;
                s1[x]='0';
                s1[0]='1';
                s2[y]='0';
                s2[n-1]='1';
                cout<<min(calc(s1),calc(s2))<<endl;
            }
            else if(nx<=k)
            {
                string s1;
                s1=s;
                s1[x]='0';
                s1[0]='1';
                cout<<calc(s1)<<endl;
            }
            else if(ny<=k)
            {
                string s1;
                s1=s;
                s1[y]='0';
                s1[n-1]='1';
                cout<<calc(s1)<<endl;
            }
            else
            {
                cout<<calc(s)<<endl;
            }
        }
    }
}
