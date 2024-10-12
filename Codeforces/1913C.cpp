#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,i;
    cin>>n;
    map<int,int>mp,mp1;
    while(n--)
    {
        cin>>x>>y;
        if(x==1)
        {
            mp[y]++,mp1[y]++;
        }
        else
        {
            int f=1;
            for(i=0; i<32; i++)
            {
                if(y&(1<<i))
                {
                    if(mp1[i])
                    {
                        if(mp1[i]>2)
                        {
                            int d=(mp1[i]-1)/2;
                            mp1[i+1]+=d;
                        }
                    }
                    else
                    {
                        f=0;
                        break;
                    }
                }
                else
                {
                    if(mp1[i])
                    {
                        int d=(mp1[i])/2;
                        mp1[i+1]+=d;
                    }
                }
            }
            if(f==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            mp1.clear();
            mp1=mp;
        }
    }
}
