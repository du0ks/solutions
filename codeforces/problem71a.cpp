    #include <bits/stdc++.h>
    using namespace std;
    int n;
    int  main(){
    	string s;
        scanf("%d",&n);
        while (n--)
        {
            cin >> s;
            if (s.length() > 10) cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
     
            else cout << s << endl;
        }
    return 0;
    }
