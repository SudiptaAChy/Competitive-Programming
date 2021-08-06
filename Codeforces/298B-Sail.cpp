#include<bits/stdc++.h>
#define ll long long
using namespace std;
char a[1000009];
main(void)
{
	ll n,t,i,j,sx,sy,ex,ey;

	cin>>t>>sx>>sy>>ex>>ey;
	for(i=0;i<t;i++)
        cin>>a[i];
    for(i=0;i<t;i++)
    {
        if(a[i]=='E')
        {
            if(sx<ex)
                sx+=1;
        }
        else if(a[i]=='S')
        {
            if(sy>ey)
                sy-=1;
        }
        else if(a[i]=='W')
        {
            if(sx>ex)
                sx-=1;
        }
        else
        {
            if(sy<ey)
                sy+=1;
        }
        if(sx==ex && sy==ey)
        {
            cout<<i+1;
            exit(0);
        }
    }
    cout<<"-1";
}

