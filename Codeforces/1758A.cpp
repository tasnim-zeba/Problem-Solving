#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        s1=s;
        reverse(s1.begin(),s1.end());
        cout<<s+s1<<endl;
    }
}
