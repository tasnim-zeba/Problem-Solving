#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,cr,cp,cs;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        n=s.size();
        cr=0,cp=0,cs=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='R'){
                cr++;
            }else if(s[i]=='P'){
                 cp++;
            }else if(s[i]=='S'){
                 cs++;
            }
        }
        if(cp>=cr&&cp>=cs){
            while(n--){
                cout<<'S';
            }
            cout<<endl;
        }else if(cr>=cp&&cr>=cs){
            while(n--){
                cout<<'P';
            }
            cout<<endl;
        }else{
            while(n--){
                cout<<'R';
            }
            cout<<endl;
        }
    }
    return 0;
}
