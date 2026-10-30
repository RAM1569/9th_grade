#include <iostream>
using namespace std;
int main(){
    long long int m,a,b,rest;
    cin>>a>>b;
    m=a*b;
    while(a!=0)
        {
            rest=b%a;
            b=a;
            a=rest;
        }
        cout<<b<<" "<<m/b;
}