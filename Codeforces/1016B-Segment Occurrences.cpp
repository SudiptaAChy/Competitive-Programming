#include<bits/stdc++.h>
using namespace std;
char s[1000009],t[1000009];
int main(void)
{
    int n,m,q,l,r,total;
    int i,j,k;
    cin>>n>>m>>q;
    cin>>s>>t;
    while(q--)
    {
        total=0;
        j=0;
        int match=0;
        cin>>l>>r;
        for(i=l-1;i<r;i++)
        {
            if(s[i]==t[j])
            {
                if(j+1==m)
                {
                    total++;
                    j=0;
                }
                else
                {
                    j+=1;
                }
                match=1;
            }
            else
            {
                if(match==1)
                {
                    match=0;
                    j=0;
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
