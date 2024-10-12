#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c1,c2;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        n=s.size();
        if(n==2){
            cout<<"YES\n"<<endl;
        }else{
            c1=0;
        for(i=0;i<=(n-3);i++){
            if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
                c1=1;
                break;
            }
        }
        c2=0;
        for(i=0;i<=(n-2);i++){
            if(s[i]=='1'&&s[i+1]=='1'){
                c2=1;
                break;
            }
        }
        if(c1==1){
                 cout<<"NO\n"<<endl;
           /* if(c2==0){
                cout<<"YES\n"<<endl;
            }
            else{
                cout<<"NO\n"<<endl;
            }*/
        }
        else{
            cout<<"YES\n"<<endl;
        }
        }
    }
    return 0;
}
