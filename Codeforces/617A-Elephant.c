#include<stdio.h>
#include<math.h>
main()
{
    long long n,move;
    scanf("%lld",&n);
    move=ceil(n*1.0/5);
    printf("%d",move);
}
