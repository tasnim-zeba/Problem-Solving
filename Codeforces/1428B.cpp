#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,c1,c2,ans,p;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n;
        cin>>s;
        c1=c2=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='>')
            {
                c1++;
            }else if(s[i]=='<')
            {
                c2++;
            }
        }
        if(c1==0||c2==0)
        {
            ans=n;
        }else{
            p=ans=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='-')
            {
                p++;
            }else{
                if(p>0){
                    ans=ans+p+1;
                    p=0;
                }
            }
        }
        if(p>0){
            ans=ans+p+1;
            p=0;
        }
        if(s[0]=='-'&&s[n-1]=='-'){
            ans--;
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}
