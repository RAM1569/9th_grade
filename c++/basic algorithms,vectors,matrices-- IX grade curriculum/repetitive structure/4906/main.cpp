#include <iostream>

using namespace std;

int main()
{
    uint n,nr=0,s=0,m;
    cin>>m;
    while(nr<m)
    {
        cin>>n;
        nr++;
        if(n==10 || n==100 || n==1000 || n==10000 || n==100000)

        s++;

    }
    cout<<s;
}
