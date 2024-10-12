#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    char ch,s[100005];
    int ans=0,i=1;
    s[0]='1';
    int j=0;
    while(s1[j]!='\0')
    {
        if(s[i-1]!=s1[j])
        {
            s[i]=s1[j];
            i++;
            //cout<<ans<<endl;
        }
        else{
            ans++;
            ///cout<<ans<<endl;
            i--;
        }
        j++;
    }
    ///cout<<ans<<endl;
    if(ans%2==0)
    {
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}
