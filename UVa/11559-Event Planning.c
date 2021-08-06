#include<stdio.h>
int main(void)
{
    int n,b,h,w,i,j,k,l,min;
    int p,bed,total;

    while(scanf("%d",&n)!=EOF)
    {
        min=1000000;
        scanf("%d%d%d",&b,&h,&w);
        for(i=0;i<h;i++)
        {
            scanf("%d",&p);
            for(j=0;j<w;j++)
            {
                scanf("%d",&bed);
                if(bed==0) break;
                if(bed>=n)
                {
                    total=n*p;
                    if(total<min)
                        min=total;
                }
            }
        }
        if(min<=b)
            printf("%d\n",min);
        else
            printf("stay home\n");
    }
    return 0;
}
