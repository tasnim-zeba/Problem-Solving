#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        n=n/2;
        if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }
        else{
            cout<<(n/2)<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
