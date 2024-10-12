#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==1)
        {
            if(s[0]!='z')
            {
                s.push_back((char)(s[0]+1));
            }
            else{
                s.push_back((char)(s[0]-1));
            }
            cout<<s<<endl;
        }
        else{
            int n= s.size(), x =-1;
            for(int i=0; i<n-1; i++)
            {
                if(s[i]==s[i+1])
                {
                    x = i;
                    break;
                }
            }
            if(x==-1)
            {
                if(s[n-1]!='z')
                {
                    s.push_back((char)(s[n-1]+1));
                }
                else{
                    s.push_back((char)(s[n-1]-1));
                }
                cout<<s<<endl;
            }
            else
            {
                 string s1="";
                 for(int i=0; i<=x; i++)
                 {
                     s1.push_back(s[i]);
                 }
                 if(s[x]!='z')
                {
                    s1.push_back((char)(s[x]+1));
                }
                else{
                    s1.push_back((char)(s[x]-1));
                }
                for(int i=x+1; i<n; i++)
                 {
                     s1.push_back(s[i]);
                 }
                 cout<<s1<<endl;
            }

        }

    }
}
