#include <iostream>
using namespace std;
int main(){
    int n,k,nrinm=1,nrWhile=0,nrDiv3=0,nrDiv2=0,inm2,inm3;
    cin>>n>>k;
    while(k-1>nrWhile)
        {
            nrinm=nrinm*100+1;
            nrWhile++;
        }
    while(nrinm%3==0)
        {
            nrinm /= 3;
            nrDiv3++;
        }
    while(nrinm%2==0)
        {
            nrinm /=2;
            nrDiv2++;
        }
    while(n%3==0)
        {
            n /= 3;
            nrDiv3++;
        }
    while(n%2==0)
        {
            n /= 2;
            nrDiv2++;
        }
    
        
        

    
}