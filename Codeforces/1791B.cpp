#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cx,cy,t,n,i,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        cx=cy=f=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='U')cy++;
            else if(s[i]=='D')cy--;
            else if(s[i]=='L')cx--;
            else cx++;
            if(cx==1&&cy==1)
            {
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        if(f==0)cout<<"NO"<<endl;
    }
}
