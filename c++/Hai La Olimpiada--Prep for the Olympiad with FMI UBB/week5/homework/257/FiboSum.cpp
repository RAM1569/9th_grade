#include <iostream>
#include <fstream>
//write  a number as a sum of fibonaccis' number
using namespace std;
int main(){
    int n,f0,f1,f2=0;
    cin>>n;
    while(n)
        {
            f0=1; f1=1; f2=0;
            while(f2<n)
                {
                    f2=f1+f0;
                    f0=f1;
                    f1=f2;
                    //f0 nr fib<n
                }
            n=n-f0;
            cout<<f0<<" ";
        }
    
}