#include <iostream>

using namespace std;

int main()
{
    int x,n,nr=0,f1=1,f2=0,f0=1;
    cin>>n;
    while(n>nr)
        {
        cin>>x;
        f2=0;f1=1;f0=1;
        while(f2<=x)
            {
                f2=f1+f0;
                f0=f1;
                f1=f2;
            }
            if(f0==x)
            cout<<"DA"<<"\n";
            else cout<<"NU"<<"\n";
            nr++;
        }
}
