#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,k,i,mxdf,df;
    char ch1,ch2;
   /* char ch=('a'+2);
    cout<<ch<<endl;
   /// cout<<(char)('a'+2)<<endl;
   */
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        mxdf=0;
        ch1=ch2='z';
        for(i=0;i<n;i++)
        {
            if(mxdf>=(s[i]-'a'))
            {
                s[i]='a';
            }
            else if(k>0)
            {
                df=(s[i]-'a')-mxdf;
                if(k>=df)
                {
                    mxdf=(int)(s[i]-'a');
                    k=k-df;
                    s[i]='a';
                }
                else
                {
                    ch1=s[i];
                    s[i]=s[i]-k;
                    ch2=s[i];
                    k=0;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]>ch2&&s[i]<=ch1)
            {
                s[i]=ch2;
            }
           /// cout<<s[i];
        }
        cout<<s<<endl;
    }
}
