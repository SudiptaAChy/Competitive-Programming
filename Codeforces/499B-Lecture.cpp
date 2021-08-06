#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m,i,j;
    cin>>n>>m;
    char lec[n][100],a[m][100],b[m][100];
    for(i=0;i<m;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
        cin>>lec[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(strcmp(lec[i],a[j])==0 || strcmp(lec[i],b[j])==0)
            {
                if(strlen(a[j])>strlen(b[j]))
                    cout<<b[j]<<" ";
                else if(strlen(a[j])<strlen(b[j]))
                    cout<<a[j]<<" ";
                else
                    cout<<a[j]<<" ";
            }
        }
    }
    return 0;
}
