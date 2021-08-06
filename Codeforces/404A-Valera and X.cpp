#include<bits/stdc++.h>
using namespace std;
int s[40];
main(void)
{
    char a[1000][1000];
    int i,j,n,t=0,ok=0,total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    char ch=a[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            s[a[i][j]-96]++;
        }
    }

    int re=n*n-2*n+1;

    for(i=0;i<30;i++)
    {
        if(s[i]>0)
            t++;
        if(s[i]==re)
            ok=1;
    }
    if(t!=2)
    {
        printf("NO");
        return 0;
    }
    if(ok==0)
    {
        printf("NO");
        return 0;
    }
    for(i=0,j=0;i<n-1,j<n-1;i++,j++)
    {
        if(a[i][j]!=a[i+1][j+1])
        {
            printf("NO");
            return 0;
        }
    }
    for(i=0,j=n-1;i<n,j>0;i++,j--)
    {
        if(a[i][j]!=a[i+1][j-1])
        {
            ///cout<<i<<" "<<j<<endl;
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
