#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    int lim=n/2;

        if(n&1)
        {
            for(i=1;i<=lim;i++)
                printf("I hate that I love that ");
            printf("I hate it");
        }
        else
        {
            lim=(n-1)/2;
            for(i=0;i<lim;i++)
                printf("I hate that I love that ");
            printf("I hate that I love it");
        }

}
