#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long a[1000005],b[1000005],i,c,l;
    cin>>s;
    l=s.size();
    if(l<5){
        printf("0\n");
    }
    else{
    a[0]=0;
    for(i=1;i<l;i++){
            if(s[i]=='v'){
        if(s[i]==s[i-1]){
          a[i]=a[i-1]+1;
        }
            }else{
            a[i]=a[i-1];
            }
    }
    b[l-1]=0;
    for(i=l-2;i>=0;i--){
            if(s[i]=='v'){
        if(s[i]==s[i+1]){
          b[i]=b[i+1]+1;
        }
            }else{
            b[i]=b[i+1];
            }
    }
    c=0;
    for(i=0;i<l;i++){
        if(s[i]=='o'){
            c=c+a[i]*b[i];
        }
    }
    cout<<c<<endl;
    }
    return 0;
}
