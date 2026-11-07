#include <iostream>
using namespace std;

int main(){
    int b,n,c;
    b=2;
    n=5;
    int p=1;
    while(n)
        {
            c=n%2;
            if(c==1)
            p=p*b;
            n /= 2;
            b *= b;
        }
    cout<<p;
}