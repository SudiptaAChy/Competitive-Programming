#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0) return a;
    else
        return gcd(b,a%b);
}
int main(void)
{
    int a,b,n,k=0;
    scanf("%d%d%d",&a,&b,&n);
    while(n>0)
    {
        n-=gcd(a,n);
        if(n!=0) k++;
        n-=gcd(b,n);
        k++;
    }
    if(k%2!=0) printf("0");
    else printf("1");
    return 0;
}
