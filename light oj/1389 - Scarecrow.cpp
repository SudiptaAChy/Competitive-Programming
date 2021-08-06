#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   int t,n;
   cin>>t;
   for(int cs=1;cs<=t;cs++)
   {
        cin>>n;
        int t1=0,t2=0,t3=0,ans;
        string a,b,c;
        cin>>a;
        b=a;
        c=a;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='.')
            {

                i+=2;
                t1++;
            }
            else
                continue;
        }
        printf("Case %d: %d\n",cs,t1);
   }
   return 0;
}

