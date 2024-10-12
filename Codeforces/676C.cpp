#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,a,b,ans;
    cin>>n>>k;
    string s;
    cin>>s;
    j=0;
    ans=INT_MIN;
    a=b=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            a++;
        }
        else
        {
            b++;
        }
        if(min(a,b)>k)
        {
            if(s[j]=='a')a--;
            else b--;
            j++;
        }
        else
        {
            ans=max(ans,a+b);
        }
    }
    cout<<ans<<endl;
}
