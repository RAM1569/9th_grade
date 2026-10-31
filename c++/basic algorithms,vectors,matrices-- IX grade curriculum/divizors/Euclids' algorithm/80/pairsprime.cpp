#include <iostream>
#include <math.h>
using namespace std;

/*enter numbers till the sight of 0. how many pairs of numbers that were read consecutively are prime between the 2?
gcd(a,b)==1 */
int main () {
    long int n,lastN,r,copien;
    int nr=0;
    while(n!=0)
        {
            lastN=(n);
            cin>>n;
            copien=(n);
            while(lastN)
                {
                    r=copien%lastN;
                    copien=lastN;
                    lastN=r;
                }
            if(copien==1)
            nr++;

        }
        cout<<nr;
}