#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    string  s[n+1];
    int  x[n+1];
    map<string,int>mp1,mp2;
    for(i=0;i<n;i++)
    {
       cin>>s[i]>>x[i];
       mp1[s[i]]+=x[i];
    }
    int mx=INT_MIN;
    for(i=0;i<n;i++)
    {
       mx=max(mx, mp1[s[i]]);
    }
    ///cout<<mx<<endl;
    for(i=0;i<n;i++)
    {
        mp2[s[i]]+=x[i];
        ///cout<<s[i]<<" "<<mp1[s[i]]<<" "<<mp2[s[i]]<<endl;
        if(mp2[s[i]]>=mx&&mp1[s[i]]==mx)
        {
            cout<<s[i]<<endl;
            break;
        }
    }
}
