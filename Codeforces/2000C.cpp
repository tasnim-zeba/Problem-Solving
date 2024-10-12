#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int a[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        cin>>m;
        string s[m+1];
        for(int i=0; i<m; i++){
            cin>>s[i];
        }
        for(int i=0; i<m; i++){
            if(s[i].size()!=n){
                cout<<"NO"<<endl;
                continue;
            }
            int f=1;
           vector<int>mil;
            for(char ch='a'; ch<='z'; ch++){
                vector<int>v;
                for(int j=0; j<s[i].size(); j++){
                    if(s[i][j]==ch){
                       v.push_back(a[j]);
                    }
                }
                if(v.size()==0);
                else{
                    for(int k=0; k<v.size()-1; k++){
                    if(v[k]!=v[k+1]){
                        f=0;
                        break;
                    }
                }
                if(f==1){
                    mil.push_back(v[0]);
                }
                }
            }
            if(mil.size()>=2){
                sort(mil.begin(), mil.end());
            for(int h=0; h<mil.size()-1; h++){
                if(mil[h]==mil[h+1]){
                    f=0;
                    break;
                }
            }
            }
            if(f){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}

