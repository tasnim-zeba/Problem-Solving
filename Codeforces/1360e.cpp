#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char s[n+1][n+1],ch;
        ///ch=getchar();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>ch;
                s[i][j]=ch;
            }
        }
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }
        cout<<endl;*/
        c=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==(n-1)||j==(n-1));
                else
                {
                    if(s[i][j]=='1')
                    {
                        if(s[i+1][j]=='1'||s[i][j+1]=='1');
                        else
                        {
                            c=0;
                        }
                    }
                }
            }
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
