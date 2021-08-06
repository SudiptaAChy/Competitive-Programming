#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char a[100009];
    int num,mo,jo,t,i,j,total;
    scanf("%d",&t);
    getchar();
    for(j=1;j<=t;j++)
    {
        total=0;
        gets(a);
        for(i=0;a[i];i++)
        {
            if(a[i]==' ')
                total+=1;
            else
            {
                num=a[i]-96;
                if(num<4)
                    total+=num;
                else
                {
                    if(num<16)
                    {
                        num%=3;
                        if(num==0)
                            num=3;
                        total+=num;
                    }
                    else
                    {
                        if(num==16)
                            num=1;
                        else if(num==17)
                            num=2;
                        else if(num==18)
                            num=3;
                        else if(num==19)
                            num=4;
                        else if(num==20)
                            num=1;
                        else if(num==21)
                            num=2;
                        else if(num==22)
                            num=3;
                        else if(num==23)
                            num=1;
                        else if(num==24)
                            num=2;
                        else if(num==25)
                            num=3;
                        else if(num==26)
                            num=4;

                        total+=num;
                    }
                }
            }
        }
        printf("Case #%d: %d\n",j,total);
    }
    return 0;
}
