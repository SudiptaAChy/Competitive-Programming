#include<stdio.h>
#include<string.h>
main()
{
    int a,b,c,i;
    int m1,m2,m3,m4,m5,m6,m7;
    int max=0;
    int ar[7];

    scanf("%d %d %d",&a,&b,&c);

    m1=a*b*c;
    m2=a+(b*c);
    m3=(a+b)*c;
    m4=a * (b+c);
    m5=a*b+c;
    m6=a+b*c;
    m7=a+b+c;

    ar[0]=m1;
    ar[1]=m2;
    ar[2]=m3;
    ar[3]=m4;
    ar[4]=m5;
    ar[5]=m6;
    ar[6]=m7;

    for(i=0;i<7;i++)
    {
        if(ar[i]>max)
            max=ar[i];
    }
    printf("%d",max);
}
