#include <iostream>
using namespace std;
int main() {
    int n,x, nrWhile=0, contPrime=0,d=2;
    cin>>n;
    while(n>nrWhile)
        {
            cin>>x;
            bool prim = true;
            if(x==1)
            prim=false;
            for(d=2; d*d<=x; d++)
                if(x%d==0)
                {
                    prim =false;
                    break;
                }
            if(prim)
            contPrime++;
        nrWhile++;
        }
        cout<<contPrime;
}