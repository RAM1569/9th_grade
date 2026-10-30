#include <iostream>

using namespace std;

int main()
{
    int n,m, nr=0, s=0;
    cin>>n;
    while (nr<n)
    {
        cin>>m;
        s=s+m;
        nr++;
    }
    cout<<s;
}
