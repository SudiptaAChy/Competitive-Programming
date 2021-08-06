#include<bits/stdc++.h>
using namespace std;
main(void)
{
    char m1[]="1",m2[]="14",m3[]="144";
    char a[1000];
    int i,j,k,l;
    cin>>a;
    for(i=0;a[i]; )
    {
        if(a[i]==m3[0] && a[i+1]==m3[1] && a[i+2]==m3[2])
            i+=3;
        else if(a[i]==m2[0] && a[i+1]==m2[1])
            i+=2;
        else if(a[i]==m1[0])
            i+=1;
        else
        {
            cout<<"NO\n";
            exit(0);
        }
    }
    cout<<"YES\n";
}
