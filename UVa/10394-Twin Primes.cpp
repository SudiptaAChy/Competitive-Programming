#include<stdio.h>
bool prime[20000001];
long long sq1[1000000],sq2[1000000];
main()
{
    long long i,j,k,l;
    for(i=2;i<=20000001;i++)
        prime[i]=true;
    for(i=2;i*i<=20000001;i++)
        for(j=i+i;j<=20000001;j+=i)
            if(prime[i]==true)
                prime[j]=false;


    long long q1=1,q2=1,n;
    for(i=3;i<=20000001;i++)
    {
        if(prime[i]==true && prime[i+2]==true)
        {
            sq1[q1++]=i;
            sq2[q2++]=i+2;
        }
    }

    while(scanf("%lld",&n)!=EOF)
    {
        printf("(%lld, %lld)\n",sq1[n],sq2[n]);
    }
}
