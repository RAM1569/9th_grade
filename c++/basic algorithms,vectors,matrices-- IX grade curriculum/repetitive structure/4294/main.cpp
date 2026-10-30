#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    uint n,i;

    cin>>n;
    for(i=pow(10,n-1); i<=pow(10,n); i++)
        { if(i%n==0)
        cout<<i<<" ";
        }
//semigata

}
