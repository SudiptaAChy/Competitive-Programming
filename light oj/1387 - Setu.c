#include<stdio.h>
#include<string.h>
main(void)
{
    char a[100];
    int t,i,n,k,total,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        total=0;
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j=0;j<n;j++)
        {
            scanf("%s",&a);
            if(strcmp(a,"donate")==0)
            {
                scanf("%d",&k);
                total+=k;
            }
            if(strcmp(a,"report")==0)
                printf("%d\n",total);
        }
    }
}
