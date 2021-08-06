#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n))
    {
        int s=1;
        if(n==0)
            break;
        else if(n==1)
            printf("%5d  DEFICIENT\n",n);
        else
        {
            for(int i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    if(i==(n/i))
                        s+=i;
                    else
                        s+=i+(n/i);
                }
            }
            if(s==n)
                printf("%5d  PERFECT\n",n);
            else if(s<n)
                printf("%5d  DEFICIENT\n",n);
            else
                printf("%5d  ABUNDANT\n",n);
        }
    }
    printf("END OF OUTPUT\n");
}
