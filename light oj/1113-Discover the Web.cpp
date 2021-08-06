#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,cas,i,j;
    cin>>t;
    for(cas=1;cas<=t;cas++)
    {
        printf("Case %d:\n",cas);
        string a,b="http://www.lightoj.com/",com;
        stack<string>s,s1;
        s.push(b);
        while(1)
        {
            cin>>com;
            if(com=="QUIT")
                break;
            else if(com=="VISIT")
            {
                cin>>a;
                cout<<a<<endl;
                s.push(a);
                if(!s1.empty())
                {
                    while(!s1.empty())
                        s1.pop();
                }
            }
            else if(com=="BACK")
            {
                ///cout<<s.size()<<endl;
                if(s.size()<2)
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    s1.push(s.top());
                    s.pop();
                    cout<<s.top()<<endl;
                    ///s.pop();
                }

            }
            else if(com=="FORWARD")
            {
                ///cout<<s1.size()<<endl;
                if(!s1.empty())
                {
                    s.push(s1.top());
                    cout<<s1.top()<<endl;
                    s1.pop();
                }
                else
                {
                    cout<<"Ignored"<<endl;
                }
            }
        }
    }
}
