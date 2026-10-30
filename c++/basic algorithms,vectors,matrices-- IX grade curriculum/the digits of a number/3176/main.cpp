#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("fibo0.in");
ofstream fout("fibo0.out");

int main()
{
    int n,x,nr=0,f0,f1,f2,a,b,nrSir=0,nrFin=0;
    fin>>n;
    while(n>nr)
            {
                fin>>a>>b;

                f2=0;f1=1;f0=1; int x1,x2;
                while(nrSir<b)
                        {
                            f2=f1+f0;
                            f0=f1;
                            f1=f2;
                            nrSir++;
                            if(nrSir==a-2)
                            x1=f1;
                            if(nrSir==b-2)
                            x2=f1;

                        }
                        if(x2%x1==0)
                        nrFin++;



                nr++;
            }
            fout<<nrFin;
    return 0;
}
