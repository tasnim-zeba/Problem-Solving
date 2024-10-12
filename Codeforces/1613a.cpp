#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,p1,p2,t,i,j,n,m;
    cin>>t;
    while(t--)
    {
        cin>>x1>>p1;
        cin>>x2>>p2;
        string s1=to_string(x1);
        string s2=to_string(x2);
        n=s1.size();
        m=s2.size();
        int c=0;
        if((n+p1)==(m+p2))
        {
            for(i=0;i<n&&i<m;i++)
            {
                if(s1[i]>s2[i])
                {
                    cout<<">"<<endl;
                    c=1;
                    break;
                }
                else if(s1[i]<s2[i])
                {
                    cout<<"<"<<endl;
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                if(n==m)
                {
                    cout<<"="<<endl;
                }
                else if(n>m)
                {
                    int f=0;
                    for(i=i;i<n;i++)
                    {
                        if(s1[i]!='0')
                        {
                            f=1;
                        }
                    }
                    if(f)
                    {
                        cout<<">"<<endl;
                    }
                    else
                    {
                        cout<<"="<<endl;
                    }
                }
                else if(m>n)
                {
                    int f=0;
                    for(i=i;i<m;i++)
                    {
                        if(s2[i]!='0')
                        {
                            f=1;
                        }
                    }
                    if(f)
                    {
                        cout<<"<"<<endl;
                    }
                    else
                    {
                        cout<<"="<<endl;
                    }
                }
            }
        }
        else if((n+p1)>(m+p2))
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }
    }
}
