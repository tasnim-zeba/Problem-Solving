#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005]={0},ct[100005]={0},i,q,x,y;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        a[x]++;
        ct[a[x]]++;
    }
    cin>>q;
    char ch;
    for(i=0;i<q;i++){
        cin>>ch>>y;
        if(ch=='+'){
            a[y]++;
            ct[a[y]]++;
        }else if(ch=='-'){
            ct[a[y]]--;
            a[y]--;
        }
        if(ct[4]>=2||(ct[6]>=1&&ct[2]>=2)||ct[8]>0||(ct[4]>=1&&ct[2]>=3)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
