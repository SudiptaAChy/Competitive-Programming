#include<stdio.h>
#include<math.h>
main()
{
    int n,i,c1=0,c2=0,c3=0,c4=0;
    int taxi;

    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]==1)
            c1++;
        if(a[i]==2)
            c2++;
        if(a[i]==3)
            c3++;
        if(a[i]==4)
            c4++;
    }

    if(c3==0)
        taxi=c4+ceil((c1*1+c2*2)*1./4);
    else
    {
        if(c1>c3||c1==c3)
            taxi=c4+c3+ceil((c2*2+(c1-c3)*1)*1.0/4);
        else
            taxi=c4+c3+ceil(c2*2*1.0/4);
    }

    printf("%d",taxi);
}
