#include <bits/stdc++.h>
using namespace std;
string ftb;
int a;
int  main(){
   cin>>ftb;
   for(int i=0;i<ftb.size();i++){
   	 if(ftb[i]==ftb[i-1]){
   	 	a++;
   	 	  if(a==7){
   	 	 	printf("YES");
   	 	 	break;
		}
   	   }
		  else a=1;	 
   	 }
   	 if(a<7) printf("NO");
		
		return 0;
	}


	

 
