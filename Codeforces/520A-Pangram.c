#include<stdio.h>
#include<stdlib.h>
main(void)
{
    int i,n,j,y;
    char al[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i]=a[i]+32;
    }
    for(i=0;i<26;i++)
    {
        y=1;
        for(j=0;j<n;j++)
        {
            if(al[i]==a[j])
            {
                y=0;
                break;
            }
        }
        if(y==1)
        {
            printf("NO");
            exit(0);
        }
    }
    printf("YES");
}
