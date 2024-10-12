#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1 && s[0]=='1')
        {
            cout<<"Yes"<<endl;
        }
        else if(n<4)
        {
            cout<<"No"<<endl;
        }
        else if(n==4){
            if(s[0]=='1' && s[1]=='1' && s[2] =='1' && s[3]=='1'){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            int x = sqrt(n);
            if((x*x)!=n){
                cout<<"No"<<endl;
            }
            else{
                    char str[x+1][x+1];
                    int k=0;
                    for(int i=0; i<x; i++)
                    {
                        for(int j=0; j<x; j++)
                        {
                            str[i][j]=s[k];
                            k++;
                        }
                    }
                    int f=1;
                for(int i=0; i<x; i++)
                    {
                        for(int j=0; j<x; j++)
                        {
                            if(i==0 || i==(x-1) || j==0 || j==x-1){
                                if(str[i][j]=='0'){
                                        //cout<<"CXHJJ"<<endl;
                                    f=0;
                                    break;
                                }
                            }
                            else{
                                if(str[i][j]=='1'){
                                       // cout<<"JJ"<<endl;
                                    f=0;
                                    break;
                                }
                            }
                        }
                    }

                    if(f){
                        cout<<"Yes"<<endl;
                    }
                    else{
                        cout<<"No"<<endl;
                    }
            }
        }
    }
}

