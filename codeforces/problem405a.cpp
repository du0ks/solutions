#include<bits/stdc++.h>
using namespace std;
int num;
int temp;
int arr[105];
int main(){
	scanf("%d",&num);
	for (int i=0;i<num;i++){
		scanf("%d",&arr[i]);	
	}
	for (int a=1;a<num;a++){
        for(int b=0;b<num-1;b++){
		   if(arr[b]>arr[b+1]){
		   	   temp=arr[b];
		   	   arr[b]=arr[b+1];
		   	   arr[b+1]=temp;
		   }
		}
	}
	for (int d=0;d<num;d++){
		printf("%d  ",arr[d]);	
	}
	return 0;
}
