#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        char a[19];
        scanf("%d%s",&n,&a);
        if(a[0]=='A')
        {
            if(n%3==1) printf("Case %d: Bob\n",cs);
            else printf("Case %d: Alice\n",cs);
        }
        else
        {
            if(n%3==0) printf("Case %d: Alice\n",cs);
            else printf("Case %d: Bob\n",cs);
        }
    }
    return 0;
}
