#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,m,r;
    cin>>x;
    r=0;
    while(x>1)
    {
        if(x%2==0)
        {
            x=x/2;
        }
        else
        {
            x--;
            r++;
        }
    }
    cout<<r+1<<endl;
    return 0;
}
