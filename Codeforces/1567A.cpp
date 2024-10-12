#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                cout<<"L";
            }
            else if(s[i]=='R')
            {
                cout<<"R";
            }
            else if(s[i]=='U')
            {
                cout<<"D";
            }
            else if(s[i]=='D')
            {
                cout<<"U";
            }
        }
        cout<<endl;
    }
    return 0;
}
