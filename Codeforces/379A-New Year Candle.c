#include<stdio.h>
int main(void)
{
    int a,b,s,ca,n;
    scanf("%d%d",&a,&b);
    s=a;
    while(a>=b)
    {
        ca=0;
        n=a/b;
        ca=a%b;
        s+=n;
        a=n+ca;
    }
    printf("%d",s);
    return 0;
}
