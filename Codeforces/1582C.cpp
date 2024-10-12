#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a1,a2,f1,f2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        char ch1,ch2;
        for(i=0,j=n-1;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                ch1=s[i];
                ch2=s[j];
                break;
            }
        }
        a1=0,f1=1;
        for(i=0,j=n-1;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                if(s[i]==ch1)
                {
                    j++;
                    a1++;
                }
                else  if(s[j]==ch1)
                {
                    i--;
                    a1++;
                }
                else{
                    f1=0;
                    break;
                }
            }
        }
        a2=0,f2=1;
        for(i=0,j=n-1;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                if(s[i]==ch2)
                {
                    j++;
                    a2++;
                }
                else  if(s[j]==ch2)
                {
                    i--;
                    a2++;
                }
                else{
                    f2=0;
                    break;
                }
            }
        }
        if(f1==0&&f2==0)
        {
            cout<<-1<<endl;
        }
        else if(f1==1&&f2==0)
        {
            cout<<a1<<endl;
        }
        else if(f1==0&&f2==1)
        {
            cout<<a2<<endl;
        }
        else{
            cout<<min(a1,a2)<<endl;
        }
    }
    return 0;
}
