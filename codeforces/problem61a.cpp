#include <bits/stdc++.h>
using namespace std;
string n,m;
int main()
{
cin>>n;
cin>>m;
      for(int i=0;i<n.length();i++){
        (n[i]==m[i])?n[i]='0':n[i]='1';
      }
cout<<n;
  return 0;
}
