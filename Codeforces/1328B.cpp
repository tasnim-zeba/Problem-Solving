#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j,c,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        /*string s[n+1];
        for(i=0;i<n;i++)
        {
            s[i]='a';
        }
        cout<<s<<endl;*/
        i=3;
        j=3;
        while(1)
        {
            i=i+j;
            if(i>=k)
            {
                c=j;
                m=i-j;
                break;
            }
            j++;
        }
        /*if(k>3)
        {
            s[k-m-1]='b';
            s[j]='b';
        }
        else if(k==1)
        {
            s[0]='b';
            s[1]='b';
        }
        else if(k==2)
        {
            s[0]='b';
            s[2]='b';
        }
        else if(k==3)
        {
            s[1]='b';
            s[2]='b';
        }*/
        ///cout<<s<<endl;
        for(i=n-1; i>=0; i--)
        {
            if(k>3)
            {
                if(i==(k-m-1)||i==j)
                {
                    cout<<'b';
                }
                else
                {
                    cout<<'a';
                }
                //s[k-m-1]='b';
                //s[j]='b';
            }
            else if(k==1)
            {
                //s[0]='b';
                //s[1]='b';
                if(i==0||i==1)
                {
                    cout<<'b';
                }
                else
                {
                    cout<<'a';
                }
            }
            else if(k==2)
            {
                //s[0]='b';
                //s[2]='b';
                if(i==0||i==2)
                {
                    cout<<'b';
                }
                else
                {
                    cout<<'a';
                }
            }
            else if(k==3)
            {
                ///s[1]='b';
                ///s[2]='b';
                if(i==1||i==2)
                {
                    cout<<'b';
                }
                else
                {
                    cout<<'a';
                }
            }
        }
        cout<<endl;
    }

    return 0;
}

