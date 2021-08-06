#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char a[5][5];
    int i,j;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            cin>>a[i][j];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]==a[i][j+1]&&a[i][j]==a[i+1][j+1] || a[i][j]==a[i+1][j]&&a[i][j]==a[i+1][j+1] || a[i][j]==a[i][j+1]&&a[i][j]==a[i+1][j] || a[i][j]==a[i+1][j]&&a[i][j]==a[i+1][j-1])
            {
                cout<<"YES";
                exit(0);
            }
        }
    }
    cout<<"NO";
    return 0;
}
