#include<stdio.h>
int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
void dig(int n)
{
    int r;
    while(n>0)
    {
        r=n%10;
        if(r==0)
            n0++;
        if(r==1)
            n1++;
        if(r==2)
            n2++;
        if(r==3)
            n3++;
        if(r==4)
            n4++;
        if(r==5)
            n5++;
        if(r==6)
            n6++;
        if(r==7)
            n7++;
        if(r==8)
            n8++;
        if(r==9)
            n9++;
        n/=10;
    }
}
main(void)
{
    int t,n,i,i1,len;
    scanf("%d",&t);
    while(t--)
    {
        n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
        scanf("%d",&n);
        len=n/2;
        for(i=0;i<=len;i++)
        {
            i1=n-i;
            if(i==i1)
                dig(i);
            else
            {
                dig(i);
                dig(i1);
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
    }
}
