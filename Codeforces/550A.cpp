#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string s;
    cin>>s;
    n=s.size();
    int c1=0,c2=0;
    j=-1;
    for(i=0; i<n-1; i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            j=i+2;
            break;
        }
    }
    if(j!=-1)
    {
        for(i=j; i<n-1; i++)
        {
            if(s[i]=='B'&&s[i+1]=='A')
            {
                c1=1;
            }
        }
    }
    j=-1;
    for(i=0; i<n-1; i++)
    {
        if(s[i]=='B'&&s[i+1]=='A')
        {
            j=i+2;
            break;
        }
    }
    if(j!=-1)
    {
        for(i=j; i<n-1; i++)
        {
            if(s[i]=='A'&&s[i+1]=='B')
            {
                c2=1;
            }
        }
    }
    if(c1||c2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    /// cout<<c1<<" "<<c2<<endl;
}
