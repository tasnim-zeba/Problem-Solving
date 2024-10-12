#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  l=1, r=1000;
        while((r-l)>1)
        {
            int mid1 = (2*l+r)/3;
            int mid2 = (l+ 2*r)/3;
            cout<<"?"<<" "<<mid1<<" "<<mid2<<endl;
            int x;
            cin>>x;
            if(x==(mid1+1)*(mid2+1)){
                r=mid1;
            }
            else if(x==(mid2+1)*mid1)
            {
                l=mid1;
                r=mid2;
            }
            else if(x==mid1*mid2)
            {
                l=mid2;
            }
        }
        cout<<"! "<<r<<endl;
    }
}

