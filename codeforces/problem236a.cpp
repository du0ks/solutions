#include<bits/stdc++.h>
using namespace std;
int cev;
char name [105];
int B[105],uz;
int main (){
	scanf("%s",name);
	uz=(int)strlen(name);
	for(int i=0;i<uz;i++){
		if(B[name[i]-97]==0) {
            B[name[i]-97]=1;
			cev++;		    
		}   
	}
	if(cev%2==0)
	  printf("CHAT WITH HER!");
	else 
	  printf("IGNORE HIM!");
	return 0;
}
