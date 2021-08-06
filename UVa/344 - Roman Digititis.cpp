#include<bits/stdc++.h>
using namespace std;
int getone(int n)
{
    int r=n%10;
    if(r==1 || r==4 || r==6 || r==9) return 1;
    else if(r==2 || r==7) return 2;
    else if(r==3 || r==8) return 3;
    else return 0;
}
int getfive(int n)
{
    int r=n%10;
    if(r>=4 && r<=8) return 1;
    else return 0;
}
int getten(int n)
{
    if(n>=50) n%=50;
    if(n>=40 && n<50) n-=30;
    int r=n%10;
    int ttl=0;
    if(r==9) ttl+=1;
    int d=n/10;
    return ttl+d;
}
int getfifty(int n)
{
    if(n>=40 && n<90) return 1;
    return 0;
}
int gethun(int n)
{
    if(n>=90) return 1;
    return 0;
}
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        int on=0,fv=0,tn=0,ff=0,hn=0;
        for(int i=1;i<=n;i++)
        {
            on+=getone(i);
            fv+=getfive(i);
            tn+=getten(i);
            ff+=getfifty(i);
            hn+=gethun(i);
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,on,fv,tn,ff,hn);
    }
}
