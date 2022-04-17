#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int dice[n];
        for(int i=0; i<n;i++)
        cin>>dice[i];
        
        double fir=0,sec=0;
        for(int i=0;i<n;i++)
        {
            if(dice[i]==a)
            fir++;
        }
        for(int i=0;i<n;i++)
        {
            if(dice[i]==b)
            sec++;
        }
        
        double prob;
        prob=(fir*sec)/(n*n);
        
        cout<<fixed<<setprecision(10)<<prob<<endl;
        
    }
    return 0;
}
