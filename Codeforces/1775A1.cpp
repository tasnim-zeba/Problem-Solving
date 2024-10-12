#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a,b;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        a=0,b=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='a')a++;
            else b++;
        }
        if(a==0||b==0||(s[0]=='a'&&s[n-1]=='b'))
        {
            for(i=0; i<n-2; i++)
            {
                cout<<s[i];
            }
            cout<<" ";
            cout<<s[n-2]<<" ";
            cout<<s[n-1]<<endl;
            continue;
        }
        if((s[0]=='b'&&s[n-1]=='a')||(s[0]=='b'&&s[n-1]=='b'))
        {
            int p=-1;
            for(i=1; i<n-1; i++)
            {
                if(s[i]=='a')
                {
                    p=i;
                    break;
                }
            }
            if(p==-1)
            {
                cout<<s[0]<<" ";
                for(i=1; i<n-1; i++)
                {
                    cout<<s[i];
                }
                cout<<" ";
                cout<<s[n-1]<<endl;
            }
            else
            {
                for(i=0; i<p; i++)
                {
                    cout<<s[i];
                }
                cout<<" ";
                cout<<s[p]<<" ";
                for(i=p+1; i<n; i++)
                {
                    cout<<s[i];
                }
                cout<<endl;
            }
            continue;
        }
        if(s[0]=='a'&&s[n-1]=='a')
        {
            cout<<s[0]<<" ";
            for(i=1; i<n-1; i++)
            {
                cout<<s[i];
            }
            cout<<" ";
            cout<<s[n-1]<<endl;
            continue;
        }
    }
}
