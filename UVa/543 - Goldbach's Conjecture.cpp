#include<stdio.h>
bool prime[1000009];
int main(void)
{
    int i,k,l,j;
    prime[1]=false;
    for(i=2;i<=1000001;i++)
        prime[i]=true;
    for(i=2;i*i<=1000001;i++)
        for(j=i+i;j<=1000001;j+=i)
            if(prime[i]==true)
                prime[j]=false;

    int n;
    while(scanf("%d",&n))
    {
        int ache=0;
        if(n==0)
            break;
        for(i=2;i<=n/2;i++)
        {
            if(prime[i]==true)
            {
                j=n-i;
                if(prime[j]==true)
                {
                    printf("%d = %d + %d\n",n,i,j);
                    ache=1;
                    break;
                }
            }
        }
        if(ache==0) printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
