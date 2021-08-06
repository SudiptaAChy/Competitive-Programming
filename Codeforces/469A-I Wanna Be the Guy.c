#include<stdio.h>
main()
{
    int n,p,q,i,j,k,w;

    scanf("%d",&n);

    scanf("%d",&p);
    int a[p];
    for(i=0;i<p;i++)
        scanf("%d",&a[i]);

    scanf("%d",&q);
    int b[q];
    for(j=0;j<q;j++)
        scanf("%d",&b[j]);

    int c[p+q];
    int lim=p+q;

    for(k=0,i=0;i<p;k++,i++)
        c[k]=a[i];
    for(k=p,j=0;j<q;k++,j++)
        c[k]=b[j];

    int same=0;

    for(k=0;k<lim;k++)
    {
        for(w=k+1;w<lim;w++)
            if(c[w]==c[k])
                same++;
    }

    int dis=p+q-same;

    if(dis==n)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
}
