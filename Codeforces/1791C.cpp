#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cx,cy,t,n,i,f,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        for(i=0,j=n-1;i<=j;i++,j--)
        {
            if(s[i]==s[j])break;
        }
        if(i>j)cout<<0<<endl;
        else cout<<(j-i)+1<<endl;
    }
}

