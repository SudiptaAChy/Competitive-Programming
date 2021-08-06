#include<stdio.h>
main(void)
{
    int n,m;
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i%2==1)
                printf("#");
            else
            {
                if(i%4==0)
                {
                    if(j*2==2)
                        printf("#");
                    else
                        printf(".");
                }
                else
                {
                    if(j/m==0)
                        printf(".");
                    else
                        printf("#");
                }
            }
        }
        printf("\n");
    }
}
