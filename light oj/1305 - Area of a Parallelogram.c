#include<stdio.h>
#include<math.h>
main()
{
    int i,t;
    int ax,ay,bx,by,cx,cy,dx,dy,area;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d %d %d %d",&ax,&ay,&bx,&by,&cx,&cy);
        dx=cx-bx+ax;
        dy=cy-by+ay;
        area=0.5*abs(ax*by+bx*cy+cx*dy+dx*ay-bx*ay-cx*by-dx*cy-ax*dy);
        printf("Case %d: %d %d %d\n",i,dx,dy,area);
    }

}
