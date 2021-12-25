#include <bits/stdc++.h>
using namespace std;
string name,rev,a;
int  main(){
	cin>>name;
    a=name;
	reverse(a.begin(),a.end());
	cin>>name;
	if(a==name) printf("YES");
	else printf("NO");
	return 0;
}
 
