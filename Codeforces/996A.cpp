#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c,x;
    scanf("%lld",&n);
    x=n;
    c=0;
    c=c+(x/100);
    x=x-(x/100)*100;
    c=c+(x/20);
    x=x-(x/20)*20;
    c=c+(x/10);
    x=x-(x/10)*10;
    c=c+(x/5);
    x=x-(x/5)*5;
    c=c+(x/1);
    x=x-(x/1)*1;
    printf("%lld\n",c);
    return 0;
}
