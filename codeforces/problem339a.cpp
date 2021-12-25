    #include<bits/stdc++.h>
    using namespace std;
    char s[105];
    int a[55],x,y,k,temp;
    int main(){
     cin>>s;
     x=sizeof(s);
       for(int i=0;i<x-1;i++){
          if(s[i]>=48 && s[i]<=57){
            a[y]=s[i];
              y++;
          }
        }
    k=(sizeof(a)/sizeof *a);
    sort(a,a+y);
    for(int q=0;q<=y-1;q++){
    	if(q==y-1) {
    	printf("%c",a[q]);
    		goto stop;
    	}
        printf("%c+",a[q]);
    }
    stop:
        return 0;
    }
