#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string s;
    cin>>s;
    int c=0;
    n=s.size();
    for(i=0; i<n; i++)
    {
        if(s[i]=='0'||s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8')
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=0; i<n; i++)
    {
        if(s[i]=='0'||s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8')
        {
            if(c==1)
            {
                swap(s[i],s[n-1]);
                c--;
                break;
            }
            else
            {
                if(s[i]<s[n-1])
                {
                    swap(s[i],s[n-1]);
                    c--;
                    break;
                }
                else
                {
                    c--;
                }
            }
        }
    }
    cout<<s<<endl;
}
