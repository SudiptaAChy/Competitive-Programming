#include<stdio.h>
#include<math.h>
main(void)
{
    int t,no=1;
    int i,count,total,k;
    char a[1000009],b[1000009];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        count=0,k=0;
        int magic1=0,fac,magic2=0,ra;
        gets(a);
        for(i=0;a[i];i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                count++;
                b[k++]=a[i];
            }
            if(a[i]>='A' && a[i]<='Z')
            {
                count++;
                b[k++]=a[i]+32;
            }
        }
        b[k]='\0';
        printf("Case #%d:\n",no++);
        total=sqrt(count);
        if(total*total!=count)
            printf("No magic :(\n");
        else
        {
            fac=total-1;
            ra=count-1;
            for(i=0;i<total;i++)
            {
                if(b[i]!=b[i*fac+i])
                {
                    magic1=1;
                    break;
                }
            }
            for(i=0;i<total;i++)
            {
                if(b[i]!=b[ra-i])
                {
                    magic2=1;
                    break;
                }
            }
            if(magic1==1 || magic2==1) printf("No magic :(\n");
            else printf("%d\n",total);
        }
    }
}
