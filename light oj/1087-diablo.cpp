#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,k,com;
    char ch[3];
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        deque<int>d;
        scanf("%d%d",&n,&com);
        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            d.push_back(x);
        }
        printf("Case %d:\n",cs);
        while(com--)
        {
            scanf("%s%d",ch,&k);
            if(ch[0]=='c')
            {
                if(d.size()==0 || k>d.size())
                {
                    puts("none");
                }
                else
                {
                    printf("%d\n",d.at(k-1));
                    d.erase(d.begin()+k-1);
                }
            }
            else
                d.push_back(k);
        }
    }
}
