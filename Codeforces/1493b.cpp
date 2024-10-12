#include<bits/stdc++.h>
using namespace std;
int h,m,hh,mm,nh,nm;
int a[11]={0,1,5,-1,-1,2,-1,-1,8,-1};
bool check(int nh,int nm)
{
    if(a[nh%10]==-1||a[nh/10]==-1||a[nm%10]==-1||a[nm/10]==-1)
    {
        return false;
    }
    int nnh=a[nm%10]*10+a[nm/10];
    int nnm=a[nh%10]*10+a[nh/10];
    if((nnh<h)&&(nnm<m))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        scanf("%d:%d",&hh,&mm);
        nh=hh,nm=mm;
        while(nh!=0||nm!=0)
        {
            if(check(nh,nm))
            {
                break;
            }
            if(nm==(m-1))
            {
                nh=(nh+1)%h;
            }
            nm=(nm+1)%m;
        }
        cout<<(nh/10)<<(nh%10)<<":"<<(nm/10)<<(nm%10)<<endl;
    }
    return 0;
}
