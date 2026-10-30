#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ograda.in");
ofstream fout("ograda.out");
int main()
{
        int c,p,subPunct,n,nrDivPar=0,nrDivImpar=0;
        fin>>subPunct;
        if(subPunct==1)
            {
                fin>>c>>p;
                fout<<c-(p-2*c)/2<<" "<<(p-2*c)/2;
            }
        if(subPunct==2)
            {
                fin>>c>>p;
                for (long long e = 1; e * e <=c; e++)
                    if (c% e == 0) {
                        if (e != c / e && e%2==1)
                            nrDivImpar++;
                            if (e!= c / e && (c/e)%2==1)
                                nrDivImpar++;
                                if(e==c/e&& e%2==1)
                                    nrDivImpar++;
                                    }
                                    fout<<nrDivImpar<<" ";
                for (long long d = 1; d * d <= p; d++)
                    if (p% d == 0) {
                        if (d != p / d && d%2==0)
                            nrDivPar++;
                            if (d != p / d && (p/d)%2==0)
                                nrDivPar++;
                                if(d==p/d && d%2==0)
                                    nrDivPar++;
                                    }
                                    fout<<nrDivPar;


            }

}
