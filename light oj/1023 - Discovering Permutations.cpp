#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        char alpha[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        scanf("%d%d",&n,&k);
        printf("Case %d:\n",cs);
        do
        {
            for(int i=0;i<n;i++) cout<<alpha[i];
            cout<<endl;
            k--;
        }
        while(next_permutation(alpha,alpha+n) && k>0);
    }
}
