#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,pos,neg,c,x;
    cin>>n;
    pos=1,neg=0,c=1;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x<0)
        {
            c=c*(-1);
        }
        if(c==1)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    cout<<pos*neg<<" "<<(n*(n+1))/2-(pos*neg)<<endl;
}
