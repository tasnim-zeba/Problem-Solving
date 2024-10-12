#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans,i;
    string s;
    cin>>s;
    n=s.size();
    ans=(1<<n)-2;
    reverse(s.begin(),s.end());
    for(i=0;i<n;i++)
    {
        if(s[i]=='7')
        {
            ans=ans+(1<<i);
        }
    }
    cout<<ans+1<<endl;

}
