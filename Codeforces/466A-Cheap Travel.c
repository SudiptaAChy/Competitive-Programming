#include<stdio.h>
#include<math.h>
main(void)
{
    int n,m,a,b;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    int min=100000,s1,s2,s3,s4;

    s1=(n/m)*b+(n-(n/m)*m)*a;
    if(s1<min)
        min=s1;
    s2=(ceil(n*1.0/m))*b;
    if(s2<min)
        min=s2;
    s3=n*a;
    if(s3<min)
        min=s3;

    printf("%d",min);
}
