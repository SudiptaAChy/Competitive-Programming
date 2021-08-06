#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>n>>a;
        for(int i=0;i<a.size();i++)
        {
            if(i==0 && (i+1)==a.size())
            {
                break;
            }
            if(a[i]=='>' && i!=n-1)
            {
                a.erase(a.begin()+i+1);
                i=-1;
            }
            else if(a[i]=='<' && i!=0)
            {
                a.erase(a.begin()+i-1);
                i=-1;
            }
        }
        cout<<a.size()-1<<endl;
    }
}
/*
2
5
<<<<<
5
>>>>>
*/
