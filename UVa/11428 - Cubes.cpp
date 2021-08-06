#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
int main(void)
{
    int n;
    while(scanf("%d",&n) && n)
    {
        int ansx=-1,ansy=-1;
        for(int y=1;y<=100;y++)
        {
            for(int x=1;x<=100;x++)
            {
                if(pow(x,3)-pow(y,3)==n)
                {
                    ansx=x,ansy=y;
                    break;
                }
            }
            if(ansx!=-1) break;
        }
        if(ansx==-1) puts("No solution");
        else printf("%d %d\n",ansx,ansy);
    }
    return 0;
}
