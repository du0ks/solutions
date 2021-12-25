#include <bits/stdc++.h>
using namespace std;
int a,d,n;
string b;
int main()
{
// A=65 D=68

scanf("%d",&n);
cin>>b;
for(int i=0;i<n;i++){
  if(b[i]=='A') a++;
  else d++;
}
if(a>d) printf("Anton");
else if (a<d) printf("Danik");
else if(a==d) printf("Friendship");
return 0;
}
