#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[15],pro,i,j;
    string s="codeforces";
    scanf("%lld",&n);
    for(i=0;i<10;i++){
        a[i]=1;
    }
    pro=1;
    while(pro<n){
        for(i=0;i<10;i++){
            a[i]++;
            pro=pro/(a[i]-1);
            pro=pro*a[i];
            if(pro>=n){
                break;
            }
        }
    }
    for(i=0;i<10;i++){
        j=a[i];
        while(j--){
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
