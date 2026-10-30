#include <iostream>

using namespace std;

int main()
{
    int n,f1,f0,f2,nr=2;
    cin>>n;
    f1=f0=1;
    if(n==1)
    cout<<1;
    else cout<<f1<<" "<<f1<<" ";
        while(nr<n)
        {
            f2=f1+f0;
            f0=f1;
            f1=f2;
            nr++;
            cout<<f2<<" ";
        }


    return 0;
}
