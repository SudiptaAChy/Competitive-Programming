#include<stdio.h>
#include<string.h>
main()
{
    int i,n,j,total=1,milse;
    scanf("%d",&n);
    char col[n][100],spe[n][100];
    for(i=0;i<n;i++)
        scanf("%s %s",spe[i],col[i]);
    for(i=1;i<n;i++)
    {
        milse=0;
        for(j=0;j<i;j++)
        {
            if(strcmp(spe[i],spe[j])==0 && strcmp(col[i],col[j])==0)
            {
                milse=1;
            }
        }
        if(milse==0)
            total++;

    }
    printf("%d",total);
}
