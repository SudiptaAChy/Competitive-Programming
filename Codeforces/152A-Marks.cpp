#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,k,j,s=0,ok;
	scanf("%d%d",&n,&m);
	char a[n+1][m+1];
	for(i=0;i<n;i++) scanf("%s",&a[i]);
	for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            ok=0;
            for(k=i+1;k<n;k++)
            {
                if(a[i][j]<a[k][j])
                {
                    ///cout<<"val -> "<<a[k][j]<<" i = "<<i<<" k = "<<k<<" j = "<<j<<endl;
                    ok=1;break;
                }
            }
            for(k=i-1;k>=0;k--)
            {
                if(a[i][j]<a[k][j])
                {
                    ///cout<<"val -> "<<a[k][j]<<" i = "<<i<<" k = "<<k<<" j = "<<j<<endl;
                    ok=1;break;
                }
            }
            if(ok==0)
            {
                s++;break;
            }
        }
    }
    cout<<s;
	return 0;
}
