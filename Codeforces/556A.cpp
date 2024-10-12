#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c0,c1,ans;
    string s;
    cin>>n;cin>>s;
    i=0,c0=0,c1=0;
    while(s[i]!='\0'){
        if(s[i]=='0'){
            c0++;
        }
        else  if(s[i]=='1'){
            c1++;
        }
        i++;
    }
    ans=abs(c1-c0);
    printf("%d\n",ans);
}
