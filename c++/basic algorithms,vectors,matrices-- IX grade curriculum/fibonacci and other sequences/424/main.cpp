#include <iostream>

using namespace std;

int main()
{
    int a,b,f2=0,n;
    cin>>a>>b>>n;
    cout<<a<<" "<<b<<" ";
    while(f2<=n and abs(f2)<=n)
        {
            f2=a+b;
            a=b;
            b=f2;
            if(f2<=n)
            cout<<f2<<" ";
        }
    return 0;
}
