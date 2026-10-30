#include <iostream>

using namespace std;

int main()
{
    int n,f1=1,f2=0,f0=1;
    cin>>n;
    if(n==1)
    cout<<1<<" "<<1;
    else {
        cout<<f0<<" "<<f1<<" ";
        while(f2<n)
        {
            f2=f1+f0;
            f0=f1;
            f1=f2;
            if(f2<=n)
                cout<<f2<<" ";
        }
    }



    return 0;
}
