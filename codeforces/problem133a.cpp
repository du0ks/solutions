#include<bits/stdc++.h>
using namespace std;
char s[105];
int y;
int main(){
	cin>>s;
	int x=strlen(s);
	for(int i=0;i<=x-1;i++){
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
			y++;
		}   
	}
	if(y!=0) printf("YES");
	else printf("NO");
	
	return 0;
}
