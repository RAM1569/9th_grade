#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    long long int a,n,nr=0,m,nr1=0,r;
    cin>>n;
    while (n>nr)
    {
        cin>>r>>a;
        m=r*r+3*r+1;
        nr++;
        if(m==a)
        nr1++;
    }
    cout<<nr1;
return 0;
}
