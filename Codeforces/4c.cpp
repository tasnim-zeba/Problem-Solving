#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    map<string,int>mp;
    string s;
    while(n--)
    {
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK"<<endl;
            mp[s]++;
        }
        else
        {
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }
    return 0;
}
