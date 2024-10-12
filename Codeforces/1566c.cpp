#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c,f,c1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        c=0;
        for(i=0; i<n; i++)
        {
            if(i==(n-1))
            {
                if(s1[i]=='1'&&s2[i]=='1');
                else if(s1[i]=='0'&&s2[i]=='0')
                {
                    c++;
                }
                else
                {
                    c=c+2;
                }
            }
            else
            {
                if(s1[i]=='0'&&s2[i]=='0')
                {
                    if(s1[i+1]=='1'&&s2[i+1]=='1')
                    {
                        c=c+2;
                        i++;
                    }
                    else if((s1[i]=='0'&&s2[i]=='1')||(s1[i]=='1'&&s2[i]=='0'))
                    {
                        c=c+3;
                        i++;
                    }
                    else
                    {
                        c++;
                    }
                }
                else if(s1[i]=='1'&&s2[i]=='1')
                {
                    while(s1[i]=='1'&&s2[i]=='1')
                    {
                        i++;
                    }
                    if((s1[i]=='0'&&s2[i]=='1')||(s1[i]=='1'&&s2[i]=='0')||(s1[i]=='0'&&s2[i]=='0'))
                    {
                        c=c+2;
                    }
                }
                else if((s1[i]=='0'&&s2[i]=='1')||(s1[i]=='1'&&s2[i]=='0'))
                {
                    c=c+2;
                }
            }

        }
        cout<<c<<endl;



        /*c1=1;
        for(i=0; i<n; i++)
        {
            if(s1[i]=='0'||s2[i]=='0')
            {
                c1=0;
                break;
            }
        }
        c=1,f=0;
        for(i=0; i<n; i++)
        {
            if((s1[i]=='0'&&s2[i]=='1')||(s1[i]=='1'&&s2[i]=='0'))
            {
                c=0;
                break;
            }
            if(s1[i]=='0'&&s2[i]=='0')
            {
                f++;
            }
            else if(f>0)
            {
                if((s1[i]=='0'&&s2[i]=='1')||(s1[i]=='1'&&s2[i]=='0')||(s1[i]=='1'&&s2[i]=='1'))
                {
                    c=0;
                    break;
                }
            }
        }
        if(c1)
        {
            cout<<0<<endl;
        }
        else if(c==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }*/
    }
    return 0;
}
