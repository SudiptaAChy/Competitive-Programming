#include<stdio.h>
#include<math.h>
int bina(int n);
main()
{
    int n;
    int i;
    scanf("%d",&n);
    int lim=n;
    int st=6;
    for(i=st;i<lim;i++)
    {
        if(n%i==0)
        {
            if(bina(i)==0) //true
            {
                printf("%d",i);
                goto end;
            }
        }
    }
    printf("1");
    end:
    ;
}
int bina(int n)
{
    int d,r,c1=0,c0=0;
    d=n;
    while(d>0)
    {
        r=d%2;
        d/=2;
        if(r==1)
            c1++;
        else
            c0++;
    }
    if(c1-c0==1)
        return 0; //true
    else
        return 1;
}
