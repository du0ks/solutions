#include <bits/stdc++.h>
using namespace std;
int n,a,i=1,b;
int main()
{
scanf("%d",&n);
if(n==1){
cout<<1;
goto anb;
}
else if(n==4){
cout<<2;
goto anb;
}
while(a<n){
a=a+i;
i++;
b=b+a;
//printf("b=%d-i=%d  ",b,i-1);
if(n<b){
    printf("%d",i-2);
    break;
  }

}
anb:
return 0;
}
