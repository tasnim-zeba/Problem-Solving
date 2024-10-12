#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tx,th,c,px,i;
    cin>>n;
    px=INT_MIN;
    int x[n+1],h[n+1];
    for(i=0; i<n; i++)
    {
        cin>>x[i]>>h[i];
    }
    c=0;
    for(i=0; i<n; i++)
    {
        if(i==(n-1))
        {
            c++;
        }
        else if((x[i]-h[i])>px)
        {
            c++;
            px=x[i];
        }
        else if((x[i]+h[i])<x[i+1])
        {
            c++;
            px=x[i]+h[i];
        }
        else
        {
            px=x[i];
        }
    }
    cout<<c<<endl;
}
