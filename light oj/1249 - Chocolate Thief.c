#include<stdio.h>
#include<string.h>
main()
{
    char name[100];
    char theif[100],taken[100];
    int i,t,v,n,h,w,l,j;
    int max;
    int min;

    scanf("%d",&t); //taking test cases
    for(i=1;i<=t;i++)
    {
        max=0;
        min=1000000;
        scanf("%d",&n); //students number
        for(j=1;j<=n;j++)
        {
            scanf("%s %d %d %d",&name,&l,&w,&h);
            v=h*l*w;
            if(v>max)
            {
                max=v;
                strcpy(theif,name);
            }
            if(v<min)
            {
                min=v;
                strcpy(taken,name);
            }
        }
        if(max==min)
            printf("Case %d: no thief\n",i);
        else
            printf("Case %d: %s took chocolate from %s\n",i,theif,taken);
    }
}
