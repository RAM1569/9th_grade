#include <iostream>
using namespace std;
int main(){
    int a,b,rest;
    cin>>a>>b;
    while(a!=0)
        {
            rest=b%a;
            b=a;
            a=rest;
        }
        if(b==1)
        cout<<"PIE";
        else cout<<"NOPIE";
}