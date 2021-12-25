#include <bits/stdc++.h>
int n,i,t1,q,t2;
int main()
{
    scanf("%d",&n);
    int a[106];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            t1++;
        }
        else{
            t2++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(t1>t2)
        {
        if(a[i]%2!=0)
            {
            q=i;
            }
        }
        else{
            if(a[i]%2==0)
             {
                  q=i;
       }
}
    }
    printf("%d\n",q);
}
