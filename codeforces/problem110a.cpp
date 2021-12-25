#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	long long x=a.length();
	long long y=0;
	for(int i=0;i<=x-1;i++){
		if(a[i]=='7'||a[i]=='4') y++;
	}
	if(y==7 ||y==4) printf("YES");
	else printf("NO");

    return 0;
}
