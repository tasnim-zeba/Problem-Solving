#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,i,c,a,t;
    scanf("%d %d",&n,&v);
    a=0,t=0,c=0;
    for(i=1;i<=n;i++){
            t=(n-i)-c;///oil needed
        if(t<=v){
          a=a+t*i;
        c=c+t;///oil bought
        }else{
        a=a+v*i;
        c=c+v;///oil bought
        }
    c--;
   // printf("%d\n",t);
    }
printf("%d\n",a);
    return 0;
}
