#include<stdio.h>
main(void)
{
    int frst,scnd,thrd,frth,n;
    scanf("%d",&n);
    while(++n)
    {
        frst=n/1000;
        scnd=(n/100)%10;
        thrd=(n/10)%10;
        frth=n%10;

        if(frst!=scnd && frst!=thrd && frst!=frth && scnd!=thrd && scnd!=frth && thrd!=frth)
        {
            printf("%d",n);
            break;
        }
    }
}
