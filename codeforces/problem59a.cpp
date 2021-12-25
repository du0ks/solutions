#include <bits/stdc++.h>
using namespace std;
char s[105];
int m;
int main()
{
scanf("%s",&s);
int a=strlen(s);
    for(int i=0;i<a;i++){
     if(s[i]>64 && s[i]<91) m++;
    }
       if( m>(a-m)){
         for(int j=0;j<a;j++){
           if(s[j]>96 && s[j]<123) s[j]=65+s[j]-97;
          }
        }
      else {
        for(int k=0;k<=a;k++){
         if(s[k]>64 && s[k]<91) s[k]=97+s[k]-65;
          }
       }

printf("%s",s);

  return 0;
}
