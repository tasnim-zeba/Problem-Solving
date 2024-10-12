#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    int e,n,i,j,f;
    cin>>e;
    while(e--)
    {
        cin>>n;
        string s,t;
        cin>>s>>t;
        f=1;
        for(i=0;i<n;i++)
        {
            if(s[i]==t[i])continue;
            if(s[i]+1!=t[i])
            {
                f=0;
                break;
            }
            j=i+1;
            while(s[i]==s[j])
            {
                j++;
            }
            if(s[j]!=t[i])
            {
                f=0;
                break;
            }
            s[i]++;
            s[j]--;
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(s==t)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
