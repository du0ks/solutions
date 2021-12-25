#include<bits/stdc++.h>
using namespace std;
int n,a,b,c;
int dp[4005];
int rec(int cut){
	if(cut<0) return -999999;
	if (cut==0) return 0;
	if (dp[cut]!=-1) return dp[cut];
	return dp[cut]=max(rec(cut-a)+1,max(rec(cut-b)+1,rec(cut-c)+1));
}
int main(){
	memset(dp,-1,sizeof(dp));
	scanf("%d %d %d %d",&n,&a,&b,&c);
	printf("%d",rec(n));
	return 0;
}
