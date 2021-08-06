#include<bits/stdc++.h>
using namespace std;
char a[1000009];
main(void)
{
    int n,i,j,lim,s=0,st,ok=0;
    cin>>n>>a;
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            ok=1;
            break;
        }
    }
    if(ok==0)
        printf("NO");
    else
    {
        printf("YES\n");
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                printf("%c%c",a[i],a[i+1]);
                break;
            }
        }
    }
}

