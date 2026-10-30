#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int nr=0,c;
    long long n ;
    cin>>n;
    if(n==0)
    nr=1;
    while(n!=0)
        {
            n/=10;
            nr++;
        }
        cout<<nr;



}
