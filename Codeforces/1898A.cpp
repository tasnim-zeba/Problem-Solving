#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        int b=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='B')b++;
        }
        if(b==k)
        {
            cout<<0<<endl;
        }
        else if(b>k)
        {
            int x=0,c=0;
            for(i=0;i<n;i++)
            {
                if(s[i]=='B')
                {
                    c++;
                    if(c==(b-k))
                    {
                        x=i+1;
                        break;
                    }
                }
            }
            cout<<1<<endl;
            cout<<x<<" "<<'A'<<endl;
        }
        else
        {
            int c=0,x=-1;
            int p[n+1];
            if(s[n-1]=='B')p[n-1]=1;
            else p[n-1]=0;
            for(i=n-2;i>=0;i--)
            {
                if(s[i]=='B')
                {
                    p[i]=p[i+1]+1;
                }
                else
                {
                    p[i]=p[i+1];
                }
            }
            for(i=0;i<n-1;i++)
            {
                if(((i+1)+p[i+1])==k)
                {
                    x=i+1;
                    break;
                }
            }
            int y=0;
            for(i=k;i<n;i++)
            {
                if(s[i]=='B')y++;
            }
            if(y==0)x=k;
            //cout<<x<<endl;
            if(x==-1)
            {
                cout<<2<<endl;
                cout<<n<<" "<<'A'<<endl;
                cout<<k<<" "<<'B'<<endl;
            }
            else
            {
                cout<<1<<endl;
                cout<<x<<" "<<'B'<<endl;
            }
        }
    }
}
