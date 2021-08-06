#include<stdio.h>
main()
{
    int n,p,q,i,people;
    int total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        people=q-p;
        if(people>1)
            total++;
        else
            total=total;
    }
    printf("%d\n",total);
}
