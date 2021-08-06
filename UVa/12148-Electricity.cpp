#include<bits/stdc++.h>
using namespace std;
int mnth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int mnth1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int leap(int y)
{
    if(y%400==0 || y%4==0 && y%100!=0)
        return 0;
    else
        return 1;
}
main(void)
{
    int n,d,m,y,c;
    int d1,m1,y1,c1;
    int days,total;
    int din1,din2;

    while(scanf("%d",&n) && n!=0)
    {
        d1=0,m1=0,y1=0,c1=0,days=0,total=0;
        while(n--)
        {
            scanf("%d%d%d%d",&d,&m,&y,&c);
            din1=0,din2=0;
            if(y==y1)
            {
                if(leap(y)==0)
                {
                    for(int i=0;i<m-1;i++)
                    {
                        din1+=mnth1[i];
                    }
                    din1+=d;
                    for(int i=0;i<m1-1;i++)
                    {
                        din2+=mnth1[i];
                    }
                    din2+=d1;
                    if(abs(din1-din2)==1)
                    {
                        days++;
                        total+=abs(c-c1);
                    }
                }
                else
                {
                    for(int i=0;i<m-1;i++)
                    {
                        din1+=mnth[i];
                    }
                    din1+=d;
                    for(int i=0;i<m1-1;i++)
                    {
                        din2+=mnth[i];
                    }
                    din2+=d1;
                    if(abs(din1-din2)==1)
                    {
                        days++;
                        total+=abs(c-c1);
                    }
                }
            }
            else if(abs(y-y1)==1) ///31-12-2001 ~ 1-1-2002
            {
                if(abs(m-m1)==11 && abs(d-d1)==30)
                {
                    days++;
                    total+=abs(c1-c);
                }
            }
            c1=c,d1=d,m1=m,y1=y; ///c1,d1,m1,y1 = previous
        }
        printf("%d %d\n",days,total);
    }
}
