    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
      char s[105];
      cin>>s;
        for(int i=0; i<strlen(s); i++){
            if(s[i]>=65 && s[i]<=90) s[i]+=32;
            if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i')
            continue;
            else{
                cout<<"."<<s[i];
            }
        }
        return 0;
    }
