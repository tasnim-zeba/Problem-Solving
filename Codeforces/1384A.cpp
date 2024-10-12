#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,mx,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        string s="";
        for(i=0; i<50; i++)
        {
            s=s+'a';
        }
        char ch='b';
        cout<<s<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<a[i]; j++)
            {
                cout<<s[j];
            }
            int f=0;
            for(j=a[i]; j<50; j++)
            {
                s[j]=ch;
                cout<<s[j];
                f=1;
            }
            cout<<endl;
            if(f==0)continue;
            if(ch=='z')
            {
                ch='b';
            }
            else
            {
                ch++;
            }
            if(s[0]==ch)
            {
                if(ch=='z')
                {
                    ch='b';
                }
                else
                {
                    ch++;
                }
            }
        }
    }
}
