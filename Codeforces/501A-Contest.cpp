#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,t1,t2;
    cin>>a>>b>>c>>d;
    t1=max(3*a/10,a-(a/250)*c);
    t2=max(3*b/10,b-(b/250)*d);
    if(t1>t2)
        printf("Misha");
    else if(t1<t2)
        printf("Vasya");
    else
        printf("Tie");
}
