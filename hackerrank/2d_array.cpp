#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a[10][10],sum,max=-100000;
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
            cin>>a[i][j];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>max)
                max=sum;
        }
    }
    cout<<max;
    return 0;
}
