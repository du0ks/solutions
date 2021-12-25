#include<bits/stdc++.h>
using namespace std;
long long int k,n,w,y,m;

int main(){
	scanf("%d %d %d",&k,&n,&w);
	for(int i=1;i<=w;i++){
		y=y+k*i;
	}
	m=y-n;
	if(m<0) printf("0");
	else printf("%d",m);
	
    return 0;
}
