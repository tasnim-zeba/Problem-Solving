#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,s,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string st;
        cin>>st;
        map<char,int>mp;
        map<char,int>::iterator it;
        for(i=0;i<n;i++)
        {
            mp[st[i]]++;
        }
        p=0,s=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if((it->second)%2==0)
            {
                p=p+((it->second)/2);
            }
            else
            {
                 p=p+((it->second)/2);
                 s++;
            }
        }
        if(k<=(s+2*(p%k)))
        {
            cout<<(p/k)*2+1<<endl;
        }
        else
        {
            cout<<(p/k)*2<<endl;
        }
    }
}
