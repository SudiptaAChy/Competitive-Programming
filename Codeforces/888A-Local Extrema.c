#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j,k;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int maxi=0;
    for(i=1;i<n-1;i++)
    {
        j=i-1;
        k=i+1;
        if(a[i]<a[j] && a[i]<a[k])
            maxi++;
        else if(a[i]>a[j] && a[i]>a[k])
            maxi++;
    }
    printf("%d",maxi);
}
