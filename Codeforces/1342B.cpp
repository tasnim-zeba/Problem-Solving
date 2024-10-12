#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c1,c0,l,e;
    cin>>e;
    while(e--){
        string t,s;
    cin>>t;
    n=t.size();
    c0=0,c1=0;
    for(i=0;i<n;i++)
    {
        if(t[i]=='0'){
            c0++;
        }else if(t[i]=='1'){
            c1++;
        }
    }
    if(c0==0||c1==0){
        cout<<t<<endl;
    }else{
        //l=max(c0,c1);
        l=n;
        if(t[0]=='1'){
            while(l--){
            cout<<"10";
        }
        cout<<endl;
        }else{
        while(l--){
            cout<<"01";
        }
        cout<<endl;
        }
    }
    }
    return 0;
}
