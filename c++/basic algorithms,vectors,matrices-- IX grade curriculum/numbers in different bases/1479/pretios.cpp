#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,nrCif=0,nrNr=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
        {
            int copiei=i;
            nrCif=0;
            while(copiei)
                {   
                    nrCif++;
                    copiei /= 2;
                }
            bool prim=true;
            if(i==1)
            prim=false;
            if(nrCif%2==0 && nrCif>2)
            prim=false;
            else for(int d=3; d*d<=i; d=d+2)
                    if(i%d==0)
                        {
                            prim=false;
                            break;
                        }
            if(prim==true)
                nrNr++;
        }
    cout<<nrNr;
}