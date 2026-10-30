#include <iostream>
using namespace std;
int main(){
    int a,b,rest,m,n,nr;
    cin>>a>>b;
    m=a;
    n=b;
    nr=m*n;
    while(a!=0)
        {
            rest=b%a;
            b=a;
            a=rest;
        }
        cout<<(nr/b)/m+(nr/b)/n-2;
}