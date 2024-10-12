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
        char i;
        for(i='a';i<='h';i++)
        {
            if(i==s[0])continue;
            cout<<i<<s[1]<<endl;
        }
        for(i='1';i<='8';i++)
        {
            if(i==s[1])continue;
            cout<<s[0]<<i<<endl;
        }
    }
}
