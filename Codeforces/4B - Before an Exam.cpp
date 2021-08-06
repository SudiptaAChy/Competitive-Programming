#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,sum,u[300],v[300],s1=0,s2=0;
    cin>>d>>sum;
    for(int i=0;i<d;i++)
    {
        cin>>u[i]>>v[i];
        s1+=u[i];
        s2+=v[i];
    }
    if(s2<sum || s1>sum)
    {
        puts("NO");
        return 0;
    }
    puts("YES");
    int need=sum-s1;
   /// cout<<need<<endl;
    for(int i=0;i<d;i++)
    {
        int x=min(need,v[i]-u[i]);
        u[i]+=x;
        need-=x;
        cout<<u[i]<<" ";
    }
    return 0;
}
/*
4 10
1 3
1 4
1 5
1 6
*/

