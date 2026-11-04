#include <iostream>
using namespace std;
// find the number of ones and zeros of a number written from base 10 into base 2.
int main(){
    int n,nrCif0=0,nrCif1=0;
    cin>>n;
    while(n)
        {
            if(n%2==0)
            nrCif0++;
            else nrCif1++;
            n /= 2;

        }
    cout<<nrCif0<<" "<<nrCif1;
}