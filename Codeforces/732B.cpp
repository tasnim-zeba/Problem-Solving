#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,c1;
    cin>>n>>k;
    int a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    c1=0;
    for(i=0;i<n-1;i++){
        if((a[i]+a[i+1])>=k)continue;
        c1=c1+(k-(a[i]+a[i+1]));
        a[i+1]+=(k-(a[i]+a[i+1]));
    }
    cout<<c1<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
