#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,x,i,c,n,j;
    cin>>t;
   /* t=0;
    char ch='7';
    cout<<(int)ch-48<<endl;*/
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        c=0;
        for(i=0;i<n-1;i++)
        {
            int d=(int)s[i]+(int)s[i+1]-2*48;
            if(d>9)
            {
                c=1;
                j=i;
            }
        }
        if(c==0)
        {
            cout<<(int)s[0]+(int)s[1]-2*48;
            for(i=2;i<n;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        else{
            for(i=0;i<j;i++)
            {
                cout<<s[i];
            }
            cout<<(int)s[j]+(int)s[j+1]-2*48;
            for(i=j+2;i<n;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
