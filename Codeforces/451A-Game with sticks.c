#include<stdio.h>
main()
{
    int n,m,in;
    scanf("%d %d",&n,&m);
    if(n==m)
        in=n*m;
    else if(n>m)
        in=m*(n-(n-m));
    else if(m>n)
        in=n*(m-(m-n));
    if(in%2==0)
        printf("Malvika\n");
    else
        printf("Akshat\n");
}
