#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ns;
    cin>>s;
    int n,i,j,k;
    n=s.size();
    if(s=="0")
    {
        cout<<"YES"<<endl;
        cout<<"0"<<endl;
    }
    else
    {
        int z=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                z++;
            }
        }
        if(z>=1)
        {
            cout<<"YES"<<endl;
            cout<<"0"<<endl;
        }
        else
        {
            int f=0;
            for(i=1; i<=124; i++)
            {
                int p=i*8;
                ns=to_string(p);
                int c=0;
                j=0;
                for(k=0; k<n; k++)
                {
                    if(ns[j]==s[k])
                    {
                        c++;
                        j++;
                        if(j==ns.size())
                        {
                            break;
                        }
                    }
                }
                if(c==ns.size())
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout<<"YES"<<endl;
                cout<<ns<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
