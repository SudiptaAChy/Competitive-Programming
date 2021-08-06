#include<stdio.h>
int main(void)
{
    int n,m,total=0;
    scanf("%d%d",&n,&m);
    while(m!=n)
    {
        if(n>m)
        {
            m+=1;
            total++;
        }
        else
        {
            if(m%2==0)
            {
                m/=2;
                total++;
            }
            else
            {
                m+=1;
                total++;
            }
        }
    }
    printf("%d",total);
    return 0;
}
