#include<stdio.h>
#include<math.h>
main()
{
    int n,x,y,z,i;
    int total_x=0,total_y=0,total_z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        total_x=total_x+x;
        total_y=total_y+y;
        total_z=total_z+z;
    }
    if(total_x==0 && total_y==0 && total_z==0)
        printf("YES\n");
    else
        printf("NO\n");
}
