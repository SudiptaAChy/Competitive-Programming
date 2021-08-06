#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,i,j,total=0,tana=0;
    int pair=0;
    cin>>n;
    char a[10001];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]=='x')
            tana++;
        else
        {
            tana=0;
            break;
        }
    }
    if(tana!=0)
        cout<<tana-2;
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]=='x')
            {
                pair++;
            }
            else
            {
                if(pair>2)
                {
                    total+=pair-2;
                }
                pair=0;
            }
        }
        if(pair>2)
            total+=pair-2;
        cout<<total;
    }
}

