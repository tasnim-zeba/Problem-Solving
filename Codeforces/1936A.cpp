#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(int x, int y)
{
    cout<<"? "<<x<<" "<<x<<" "<<y<<" "<<y<<endl;
    char ch;
    cin>>ch;
    if(ch=='<')
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mxi=0;
        for(int i=1; i<n; i++)
        {
            if(cmp(mxi, i))
            {
                mxi = i;
            }
        }
        int smx=0;
        for(int i=0; i<n; i++)
        {
            cout<<"? "<<smx<<" "<<mxi<<" "<<i<<" "<<mxi<<endl;
            char ch;
            cin>>ch;
            if(ch=='<')
            {
                smx = i;
            }
            else if(ch=='=')
            {
                if(cmp(i, smx))
                {
                    smx = i;
                }
            }
        }
        cout<<"! "<<smx<<" "<<mxi<<endl;
    }
}
