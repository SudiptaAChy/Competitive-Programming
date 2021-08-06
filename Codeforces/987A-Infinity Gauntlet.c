#include<stdio.h>
#include<string.h>
main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    char a[n][20];
    char mark[6][20]={ "purple",
                       "green" ,
                       "blue",
                       "orange" ,
                       "red" ,
                       "yellow" };
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        for(j=0;j<6;j++)
        {
            if(strcmp(a[i],mark[j])==0)
                strcpy(mark[j],"-1");
        }
    }
    printf("%d\n",6-n);
    for(j=0;j<6;j++)
    {
        if(strcmp(mark[j],"-1")!=0) //Power, Time, Space, Soul, Reality, Mind
        {
            if(strcmp(mark[j],"purple")==0) printf("Power\n");
            if(strcmp(mark[j],"green")==0) printf("Time\n");
            if(strcmp(mark[j],"blue")==0) printf("Space\n");
            if(strcmp(mark[j],"orange")==0) printf("Soul\n");
            if(strcmp(mark[j],"red")==0) printf("Reality\n");
            if(strcmp(mark[j],"yellow")==0) printf("Mind\n");
        }
    }
}
