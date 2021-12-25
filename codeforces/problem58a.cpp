#include<bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    string h="hello";
    string s;
    cin>>s;
    int x=s.length();
    for(int i=0; i<x; i++){
        if(s[i]==h[a]){
            a++;
            b++;
        }
    }
    if(b==5)
        printf("YES");
    else
        printf("NO");

    return 0;
}
