#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,c1,c2,ans,j;
    string s;
    cin>>n;
    cin>>s;
        c1=1,i=0;
        while(s[i]==s[i+1]){
                c1++;
            i++;
             if(i==n-1){break;}
        }
        c2=1,j=n-1;
        while(s[j]==s[j-1]){
                c2++;
            j--;
            if(j==0){break;}
        }
        if(s[0]!=s[n-1]){
            ans=1+c1+c2;
        }
        else{
        ans=1+c1+c2+(c1*c2);
        }
    cout<<(ans%998244353)<<endl;
}
