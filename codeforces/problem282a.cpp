#include<iostream>
#include<cstdio>
#include <conio.h>
using namespace std;
int num,a=0;
int main(){
char inp[10];
veri:
scanf("%d",&a);
if (a<1){
	printf("Please Enter number between 1-150.\n");
	goto veri;
}
else if(1<=a && a<=150){
	for(int i=0;i<=(a-1);++i){
	 scanf("%s",inp);
	    if(inp[1]=='+')
	    num++;
	   else if(inp[1]=='-')
	    num--;	
      }
	printf("%d",num);
  return 0;
  }
 else if(a>150){   
    printf("Please Enter number between 1-150.\n");
    goto veri;
   }
}   
