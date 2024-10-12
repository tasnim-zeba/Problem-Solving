#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],n,t,i,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        vector<int>v;
        v.push_back(a[0]);
        x=1;
        for(i=1;i<n;i++){
            if(x==1&&(a[i]-a[i-1])>0){
                continue;
            }
            else if(x==1&&(a[i]-a[i-1])<0){
                x=0;
                if(i!=1){
                   v.push_back(a[i-1]);
                }
            }
            else if(x==0&&(a[i]-a[i-1])<0){
                continue;
            }
            else if(x==0&&(a[i]-a[i-1])>0){
                x=1;
                if(i!=1){
                   v.push_back(a[i-1]);
                }
            }
        }
        v.push_back(a[n-1]);
        int s=v.size();
        printf("%d\n",s);
        for(i=0;i<v.size();i++){
            printf("%d ",v[i]);
        }
    }
    return 0;
}
