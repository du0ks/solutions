    #include <bits/stdc++.h>
    using namespace std;
    int a[5],b,c;
    int main()
    {
      scanf("%d",&b);
      for(int i=0;i<b;i++){
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        if(a[0]+a[1]+a[2]>=2) c++;
      }
    printf("%d",c);
     
      return 0;
    }
