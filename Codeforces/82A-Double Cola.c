#include<stdio.h>
#include<math.h>
main(void)
{
    int n,turn,name;
    scanf("%d",&n);
    turn=ceil(n*1.0/5);
    name=ceil((n%5)*1.0/turn);
    if(name==1)
        printf("Sheldon");
    if(name==2)
        printf("Leonard");
    if(name==3)
        printf("Penny");
    if(name==4)
        printf("Rajesh");
    if(name==5)
        printf("Howard");
}
