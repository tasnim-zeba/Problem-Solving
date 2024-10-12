#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int c=-1;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                c=i;
                break;
            }
        }
        if(c==-1)
        {
            cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<endl;
            continue;
        }
        if(i>=(n/2))
        {
            cout<<1<<" "<<i<<" "<<1<<" "<<i+1<<endl;
        }
        else
        {
            cout<<i+1<<" "<<n<<" "<<i+2<<" "<<n<<endl;
        }
    }
}
