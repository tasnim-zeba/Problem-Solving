#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        string s,s1,s2;
        cin>>s;
        n=s.size();
        s1=s[0],s2="";
        int f=1;
        for(i=1;i<n;i++)
        {
            if(s[i]!='0')
            {
                f=0;
                s2+=s[i];
            }
            else if(f==0)
            {
                s2+=s[i];
            }
            else
            {
                s1+=s[i];
            }
        }
        if(s2=="")
        {
             cout<<-1<<endl;
             continue;
        }
        int x=stoi(s1), y= stoi(s2);
        //cout<<x<<" "<<y<<endl;
        if(y>x)
        {
            cout<<s1<<" "<<s2<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
