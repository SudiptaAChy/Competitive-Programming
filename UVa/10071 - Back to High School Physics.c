#include<stdio.h>
main()
{
    long int v,t,s;
    while((scanf("%ld %ld",&v,&t))!=EOF)
    {
        s=2*v*t;
        printf("%ld\n",s);
    }
}
