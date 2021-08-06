#include<bits/stdc++.h>
using namespace std;
char wrd[]="abcdefghijklmnopqrstuvwxyz";
main(void)
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
        printf("%c",wrd[i]);
    for(int i=0;i<n-k;i++)
        printf("%c",wrd[i%k]);
}
