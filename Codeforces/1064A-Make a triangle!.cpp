#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int a,b,c,t=0,mini;
    cin>>a>>b>>c;
    while(a+b<=c || a+c<=b || b+c<=a)
    {
        if(a<=b && a<=c)
            a+=1;
        else if(b<=a && b<=c)
            b+=1;
        else if(c<=a && c<=b)
            c+=1;
        t++;
    }
    cout<<t;
}
