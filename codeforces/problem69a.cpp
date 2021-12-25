#include <bits/stdc++.h>
using namespace std;
int n,x[105],y[105],z[105];
int  main(){
	scanf("%d",&n);
       for(int i=0;i<=n-1;i++){
       	scanf("%d %d %d",&x[i],&y[i],&z[i]);
       	
	   }
    for(int t=n-1;t>=1;t--){
    	x[t-1]+=x[t];
    	y[t-1]+=y[t];
    	z[t-1]+=z[t];
	}
   if(x[0]==0 && y[0]==0 && z[0]==0) printf("YES");
   else printf("NO");

return 0;
}
