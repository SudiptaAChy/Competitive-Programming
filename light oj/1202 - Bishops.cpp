#include<bits/stdc++.h>
#define sz 123456
using namespace std;
typedef long long ll;
const ll inf=1e16;
int chk(int x1,int y1,int x2,int y2)
{
    if(x1 == x2 && y1 == y2) return 1;
    if(abs(x1-x2) == abs(y1-y2)) return 2;
    return 3;
}
int main(void)
{
    freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int r1,c1,r2,c2;
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        printf("Case %d: ",cs);
        if(chk(r1,c1,r2,c2) == 1)
        {
            printf("0\n");
            continue;
        }
        if(chk(r1,c1,r2,c2) == 2)
        {
            printf("1\n");
            continue;
        }
        int x1=abs(r1-r2);
        int x2=abs(c1-c2);
        if(x1%2 == x2%2) printf("2\n");
        else printf("impossible\n");
    }
    return 0;
}
