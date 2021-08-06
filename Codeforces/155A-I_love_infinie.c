#include<stdio.h>
main()
{
    int n,i,j,total=0,boro=0,choto=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]>a[j])
                boro=1;
            else
            {
                boro=0;
                break;
            }
        }
        for(j=i-1;j>=0;j--)
        {
            if(a[i]<a[j])
                choto=1;
            else
            {
                choto=0;
                break;
            }
        }
        if(boro==1 || choto==1)
            total++;
    }
    printf("%d",total);
}
