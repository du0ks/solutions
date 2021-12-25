#include <iostream>
using namespace std;
int arr[105],a,n,m;
int main()
{
    scanf("%d",&a);
      for(int i=0;i<a;i++){
            scanf("%d %d",&arr[n],&arr[n+1]);
           if(arr[n+1]-arr[n]>=2) m++;
         n+=2;
         }
    printf("%d",m);
    return 0;
}
