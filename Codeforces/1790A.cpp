#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        string h="314159265358979323846264338327";
        string s;
        cin>>s;
        ll c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==h[i])c++;
            else
            {
                break;
            }
        }
        cout<<c<<endl;
    }
}
