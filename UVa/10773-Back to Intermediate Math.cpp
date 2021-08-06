#include<bits/stdc++.h>
using namespace std;
main(void)
{
    long long te,i;
    double p,d,u,v;
    cin>>te;
    for(i=1;i<=te;i++)
    {
        cin>>d>>v>>u;
        if(v>=u || v==0)
        {
            cout<<"Case "<<i<<": "<<"can't determine\n";
        }
        else
        {
            double angle,r1,r2;
            double t1,t2;
            double k;

            r1=sqrt(u*u+v*v-2*(u*v*v/u));
            t1=d*1.0/r1;

            r2=sqrt(u*u+v*v);
            angle=u/sqrt(u*u+v*v);
            t2=d*1.0/(r2*angle);

            k=abs(t1*1.0-t2*1.0);
            printf("Case %lld: %0.3lf\n",i,k);
        }
    }
}
