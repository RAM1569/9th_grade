#include <iostream>
//show the first n prime numbers
using namespace std;
int main(){
    int nrWhile=1, p=3 , n ,d;
    n=15;
    if(n>1)
    cout<<2<<" ";
    //sa nu uit sa-l adaug si pe doi la final
    while(n>nrWhile)
        {
            bool prim = true;
            for(d=3; d*d<=p; d=d+2)
                if(p%d==0)
                {
                    prim = false;
                    break;
                }
            if(prim)
            cout<<p<<" ";
            else nrWhile--;
            p += 2;
            nrWhile++;
        }
        
}