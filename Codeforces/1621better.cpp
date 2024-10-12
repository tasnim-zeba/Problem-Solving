#include<cstdio>
#include<algorithm>
using namespace std;
int _,n,p,q,u,v,s,l,r,i,w;
int main(){
	scanf("%d",&_);
	while(_--){
		scanf("%d",&n);
		p=2e9;q=-2e9;u=0;v=0;s=2e9;
		for(i=1;i<=n;i++){
			scanf("%d%d%d",&l,&r,&w);
			if(p>l)u=w,p=l,s=2e9;else if(p==l)u=min(u,w);
			if(q<r)v=w,q=r,s=2e9;else if(q==r)v=min(v,w);
			if(l==p&&q==r)s=min(s,w);
			printf("%d\n",min(u+v,s));
		}
	}
}
