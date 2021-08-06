#include<stdio.h>
#include<math.h>
main()
{
    int l,r,a,size;
    scanf("%d %d %d",&l,&r,&a);
    if(a==0 && (l==0 || r==0))
        printf("0\n");
    else if(l==r && r==a)
    {
        size=3*a;
        if(size%2==0)
            printf("%d\n",size);
        else
            printf("%d\n",size-1);
    }
    else if(l<r && a<r)
    {
        if((l+a)<r)
        {
            printf("%d\n",2*(l+a));
        }
        else
        {
            size=l+r+a;
            if(size%2==0)
                printf("%d\n",size);
            else
                printf("%d\n",size-1);
        }
    }
    else if(r<l && a<l)
    {
        if((r+a)<l)
            printf("%d\n",2*(r+a));
        else
        {
            size=l+r+a;
            if(size%2==0)
                printf("%d\n",size);
            else
                printf("%d\n",size-1);
        }
    }
    else if(r<a && l<a)
    {
        size=r+l+a;
        if(size%2==0)
            printf("%d\n",size);
        else
            printf("%d\n",size-1);
    }
    else
    {
        size=l+r+a;
        if(size%2==0)
            printf("%d\n",size);
        else
            printf("%d\n",size-1);
    }
}
