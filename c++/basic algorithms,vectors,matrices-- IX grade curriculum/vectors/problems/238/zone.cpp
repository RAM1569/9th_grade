#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zone.in");
ofstream fout("zone.out");
int main(){
    int n, x[300],pozPar,pozImp,nrImp,nrPar;
    bool exista = true;
    fin>>n;
    for(int i=0; i<=3*n-1; i++)
        fin>>x[i];
    for(int i=0; i<=n-1; i++)
        if(i==n-1 && x[i]%2!=0)
            {
                exista = false;
            }
        else if(x[i]%2==0)
                {
                    nrPar=x[i];
                    pozPar=i;
                    break;
                }
    for(int i=3*n-1; i>=2*n-1; i--)
        if(i==(2*n-1) && x[i]%2==0)
            {
                exista = false;
            }
        else if(x[i]%2==1)
                {
                    nrImp=x[i];
                    pozImp=i;
                    break;
                }
    if(!(exista))
    for(int i=0; i<=3*n-1; i++)
        fout<<x[i]<<" ";
    else{
        x[pozImp]=nrPar;
        x[pozPar]=nrImp;
        for(int i=0; i<=3*n-1; i++)
            fout<<x[i]<<" ";
    }
        
}