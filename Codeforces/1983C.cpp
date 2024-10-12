#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1, n;
ll s;
int func(int x[], int y[], int z[])
{
    ll sa,sb,sc;
    sa=sb=sc=0;
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(lx==-1)
        {
            sa+=x[i];
            if(sa>=s)
            {
                lx = 1, rx = i;
                cnt++;
            }
        }
        else if(ly==-1)
        {
            sb+=y[i];
            if(sb>=s)
            {
                ly = rx+1, ry = i;
                cnt++;
            }
        }
        else if(lz==-1)
        {
            sc+=z[i];
            if(sc>=s)
            {
                lz = ry+1, rz = n;
                cnt++;
            }
        }
    }
    if(cnt==3)
    {
        return cnt;
    }
    else{
        return -1;
    }

}
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1], b[n+1], c[n+1], sua[n+2], sub[n+2], suc[n+2];
        for(i=1; i<=n; i++)cin>>a[i];
        for(i=1; i<=n; i++)cin>>b[i];
        for(i=1; i<=n; i++)cin>>c[i];
        s=0;
        for(i=1; i<=n; i++)
        {
            s += a[i];
        }
        if(s%3==0)
        {
            s=s/3;
        }
        else{
            s = (s/3) + 1;
        }
        int la=-1,ra=-1,lb=-1,rb=-1,lc=-1,rc=-1;
        // trying abc , acb pattern
        lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
        int x = func(a,b,c);
        if(x==3)
        {
            cout<<lx<<" "<<rx<<" "<<ly<<" "<<ry<<" "<<lz<<" "<<rz<<endl;
            lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
            continue;
        }
        lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
        x = func(a,c,b);
        if(x==3)
        {
            cout<<lx<<" "<<rx<<" "<<lz<<" "<<rz<<" "<<ly<<" "<<ry<<endl;
            lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
            continue;
        }
        lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
        x = func(b,a,c);
        if(x==3)
        {
            cout<<ly<<" "<<ry<<" "<<lx<<" "<<rx<<" "<<lz<<" "<<rz<<endl;
            lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
            continue;
        }
        lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
        x = func(b,c,a);
        if(x==3)
        {
            cout<<lz<<" "<<rz<<" "<<lx<<" "<<rx<<" "<<ly<<" "<<ry<<endl;
            lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
            continue;
        }
        lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
        x = func(c,a,b);
        if(x==3)
        {
            cout<<ly<<" "<<ry<<" "<<lz<<" "<<rz<<" "<<lx<<" "<<rx<<endl;
            lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
            continue;
        }
        lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
        x = func(c,b,a);
        if(x==3)
        {
            cout<<lz<<" "<<rz<<" "<<ly<<" "<<ry<<" "<<lx<<" "<<rx<<endl;
            lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
            continue;
        }
        lx=-1,rx=-1,ly=-1,ry=-1,lz=-1,rz=-1;
        cout<<-1<<endl;

    }
}
