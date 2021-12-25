#include <iostream>
using namespace std;
int z,child[100005],n,t,map[5];

int main(){
   scanf("%d",&n);
   for(int i=1;i<=n;i++  ){  	
	scanf("%d",&child[i]);
	if(child[i]==4){
		t +=1;
	}
	map[child[i]]++;
} 
      t +=map[3];
      z=max(0,map[1]-map[3]);
    t += (map[2]*2+z+3)/4; 
    printf("%d ",t);

	return 0;
}
