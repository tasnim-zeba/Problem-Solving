#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a[100005];
   cin>>t;
    while(t--){
            int n;
            cin>>n;
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        int temp=a[n];
        int ans[n]={0};
        for(i=n;i>=1;i--){
           if(temp!=0||a[i]!=0){
            ans[i]=1;
            temp=max(temp,a[i]);
            temp--;
           }else{
                temp=a[i];
           }
        }
        for(i=1;i<=n;i++){
          cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
