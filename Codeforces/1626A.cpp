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
        n=s.size();
        multiset<char>ms;
        multiset<char>:: iterator it;
        for(i=0;i<n;i++)
        {
            ms.insert(s[i]);
        }
        for(it=ms.begin();it!=ms.end();it++)
        {
            cout<<*it;
        }
        cout<<endl;
    }
    return 0;
}
