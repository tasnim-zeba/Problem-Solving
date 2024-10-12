#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,d,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        r=n%2020;
        d=n/2020;
        if(d>=r){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
