#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n= s.size();
    set<string>st;
    for(int i=1; i<=n; i++){
        char ch = s[n-1];
        s=ch+s;
        s.pop_back();
        st.insert(s);
    }
    cout<<st.size()<<endl;
}
