#include<stdio.h>
#include<math.h>
main()
{
    int n;
    scanf("%d",&n);
    if(n&1)
        printf("9 %d",n-9); //odd
    else
        printf("%d %d",n/2,n-n/2);
}
