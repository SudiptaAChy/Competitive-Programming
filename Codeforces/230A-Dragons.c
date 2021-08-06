#include<stdio.h>
#include<stdlib.h>
main()
{
    int s,n,i,t,j,z;
    scanf("%d %d",&s,&n);
    int x[n],y[n];
    for(i=0;i<n;i++) scanf("%d %d",&x[i],&y[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
                z=y[i];
                y[i]=y[j];
                y[j]=z;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s<=x[i])
        {
            printf("NO");
            exit(0);
        }
        else
        {
            s+=y[i];
        }
    }
    printf("YES");
}
