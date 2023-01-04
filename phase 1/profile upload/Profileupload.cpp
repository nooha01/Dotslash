#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,t,w,h;
    cin>>m>>t;
    while(t--)
    {
        cin>>w>>h;
        if(w<m||h<m)
        {
            cout<<"UPLOAD ANOTHER"<<endl;
        }
        else if(w==h)
        {
            cout<<"ACCEPTED"<<endl;
        }
        else
        {
            cout<<"CROP IT"<<endl;
        }
    }
    return 0;
}
