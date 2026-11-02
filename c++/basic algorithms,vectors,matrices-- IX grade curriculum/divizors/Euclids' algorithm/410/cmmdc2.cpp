#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,copien,impartitor,r;
    int nrCifre=0;
    int nrDr,nrSt;
    cin>>n;
    copien=n;
    while(copien)
    {
        nrCifre++;
        copien /= 10;
    }
    
    if(nrCifre%2==1)
        {
            impartitor=pow(10,(nrCifre-1)/2);
            nrSt = n/impartitor/10;
            nrDr = n%impartitor;
        }
    else {
            impartitor=pow(10,(nrCifre)/2);
            nrSt=n/impartitor;
            nrDr=n%impartitor;
    }
    
    while(nrDr)
        {
            r=nrSt%nrDr;
            nrSt=nrDr;
            nrDr=r;
        }
    cout<<nrSt;
}