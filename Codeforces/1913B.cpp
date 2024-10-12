#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int z=0,o=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')z++;
            else o++;
        }
        n=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0'&&o)
            {
                n++;
                o--;
            }
            else if(s[i]=='1'&&z)
            {
                n++;
                z--;
            }
            else
            {
                break;
            }
        }
        cout<<s.size()-n<<endl;
    }
}
