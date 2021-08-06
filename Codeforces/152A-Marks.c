#include <bits/stdc++.h>
using namespace std;
char s[1000][1000];
int a[1000][1000],b[100000];
main()
{
    int n,m,i,j,mx,in,k=0,k1=0,total=0,in1;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            a[i][j]=s[i][j]-'0';
        }
    }
    for(j=0;j<m;j++)
    {
        mx=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]>=mx)
            {
                mx=a[i][j];
                in=i;
            }
        }
        b[k++]=in;
    }
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[i]==b[j])
                b[j]=-1;
        }
    }
    for(i=0;i<k;i++) if(b[i]!=-1) total++;
    printf("%d",total);
}
