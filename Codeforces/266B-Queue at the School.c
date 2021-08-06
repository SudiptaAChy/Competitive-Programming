#include<stdio.h>
main()
{
    int n,t,i,k;
    scanf("%d%d",&n,&t);
    char a[n];
    getchar();
    for(i=0;i<n;i++) scanf("%c",&a[i]);
    for(k=0;k<t;k++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]=='B' && a[i+1]=='G')
            {
                a[i+1]='B';
                a[i]='G';
                i++;
            }
        }
    }
    for(i=0;i<n;i++) printf("%c",a[i]);
}
