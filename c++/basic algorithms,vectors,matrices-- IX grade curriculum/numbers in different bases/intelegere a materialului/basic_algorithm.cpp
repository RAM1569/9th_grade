#include <iostream>
using namespace std;
int main(){
    int cmax=0, n , b, cif;
    cin>>n>>b; //n-number, b-base;
    while(n)
        {
            cif= n%b;
            if(cif>cmax)
                cmax=cif;
            n /= b;
        }
    cout<<cif;
}