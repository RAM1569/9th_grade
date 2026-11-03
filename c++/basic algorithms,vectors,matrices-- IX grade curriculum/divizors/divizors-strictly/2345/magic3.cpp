#include <iostream> 
#include <fstream>
using namespace std;
ifstream fin("magic3.in");
ofstream fout("magic3.out");
int main(){
    int n,x,nrWhile=0,nrDivMin=100000,nrDivNr=0,nrNr=0;
    fin>>n;
    while(nrWhile<n)
        {
            fin>>x;
            int copiex=x;
            nrDivNr=0;
            for(int i=1; i*i<=copiex; i++)
                if(copiex%i==0)
                {
                    nrDivNr++;
                    if(i*i<copiex)
                        nrDivNr++;
                }
            if(nrDivMin>nrDivNr)
                {
                    nrDivMin=nrDivNr;
                    nrNr=1;
                }
            else if(nrDivMin==nrDivNr)
                    nrNr++;
            nrWhile++;
        }
        fout<<nrNr;
}