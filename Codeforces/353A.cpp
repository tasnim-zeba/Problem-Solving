#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,leftoddd,rightoddd,odd,i;
    cin>>n;
    leftoddd=rightoddd=odd=0;
    while(n--)
    {
        cin>>x>>y;
        if(x%2!=0&&y%2!=0)
        {
            odd++;
        }
        else if(x%2!=0&&y%2==0)
        {
            leftoddd++;
        }
        else if(x%2==0&&y%2!=0)
        {
            rightoddd++;
        }
    }
    if((leftoddd+odd)%2==0&&(rightoddd+odd)%2==0)
    {
        cout<<0<<endl;
    }
    else if((leftoddd+odd)%2!=0)
    {
        if((rightoddd+odd)%2!=0)
        {
            if(rightoddd>=1||leftoddd>=1)
            {
                cout<<1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
