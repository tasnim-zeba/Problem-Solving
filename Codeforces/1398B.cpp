#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c,n,l,a1,a2,mx;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        n=s.size();
        vector<int>v;
        c=0;
        for(i=0;i<n;i++){
            if(s[i]=='0'){
                v.push_back(c);
                c=0;
            }else if(s[i]=='1'){
                c++;
            }
        }
        v.push_back(c);
        l=v.size();
        sort(v.begin(),v.end(),greater<int>());
        a1=0,a2=0;
         for(i=0;i<l;i++){
            if(i%2==0){
                a1=a1+v[i];
            }else if(i%2!=0){
                a2=a2+v[i];
            }
        }
        mx=max(a1,a2);
        cout<<mx<<endl;
    }
    return 0;
}
