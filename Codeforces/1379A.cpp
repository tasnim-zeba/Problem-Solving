#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        string s1="abacaba";
        cin>>s;
        int c=0;
        f=0;
        for(i=0; i<n-6; i++)
        {
             string ts=s;
             for(j=i;j<i+7;j++)
             {
                 if(ts[j]=='?')
                 {
                     ts[j]=s1[j-i];
                 }
             }
             for(j=0;j<n;j++)
             {
                 if(ts[j]=='?')ts[j]='p';
             }
             int c=0;
             for(j=0;j<n-6;j++)
             {
                 if(ts.substr(j,7)==s1)
                 {
                     c++;
                 }
             }
             if(c==1)
             {
                 cout<<"Yes"<<endl;
                 cout<<ts<<endl;
                 f=1;
                 break;
             }
        }
        if(f==0)
        {
            cout<<"No"<<endl;
        }

    }
}
