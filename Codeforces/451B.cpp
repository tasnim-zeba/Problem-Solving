#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int  a[n+1],c,x,y;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    c=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            x=i;
            c++;
            while(a[i]>=a[i+1])
            {
                i++;
                if(i==(n-1))
                {
                    y=i;
                    break;
                }
            }
            y=i;
        }
    }
    /*if(c==0)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                c++;
                x=i;
                y=i+1;
                break;
            }
        }
    }*/
    if(n==1||c==0)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else if(c==1)
    {
        int f=0;
        for(i=0;i<x;i++)
        {
            if(a[i]>a[y])
            {
                f++;
            }
        }
        for(i=y+1;i<n;i++)
        {
            if(a[i]<a[x])
            {
                f++;
            }
        }
        if(f==0)
        {
            cout<<"yes"<<endl;
        cout<<x+1<<" "<<y+1<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}

