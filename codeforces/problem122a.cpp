#include<bits/stdc++.h>
using namespace std;
int n,y;
int main(){
	scanf("%d",&n);
	if(n%4==0 || n%7==0||n%47==0||n%74==0||n%444==0||n%477==0||n%447==0||n%474==0){
		printf("YES");
		
	}
	else if(n==44 || n==47||n==74||n==77||n==444||n==477||n==447||n==474){
		printf("YES");
	}
	else printf("NO");
	
	
    return 0;
}
