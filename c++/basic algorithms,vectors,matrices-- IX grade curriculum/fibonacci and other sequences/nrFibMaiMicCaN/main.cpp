#include <iostream>

using namespace std;

int main()
{
    int n,f1,f0,f2,nr=0;
    cin>>n;
    f1=f0=1;
    while(f0+f1<=n)
        {
            f2=f1+f0;
            f0=f1;
            f1=f2;
        }
        cout<<f2;

    return 0;
}
