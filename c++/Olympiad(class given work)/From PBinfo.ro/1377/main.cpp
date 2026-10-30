#include <iostream>
#include <fstream>


using namespace std;
ifstream fin("maxd.in");
ofstream fout("maxd.out");

int main()
{
    long long int b,a,d=2,y,z;
    int nrdiv,nrDiv1=0,contor=0;
    fin>>a>>b;
    for(int i=a; i<=b; i++)
        {
           // 1.nr de divizori a lui i
           d = 2;
           nrdiv = 1;
           y=i;
            {
                    while (d * d <= y)
                    {
                       int m = 0;
                    while (y % d == 0)
                            {
                                m++; y = y / d;
                            }
                                nrdiv = nrdiv * (m + 1);
                            d++;
                    }
                    if (y>1) nrdiv = nrdiv * 2;
                    //final 1.

            }

            if (nrdiv>nrDiv1)
                {
                    nrDiv1=nrdiv;
                    contor=1;
                    z=i;
                }
            else if(nrdiv==nrDiv1)
                    contor++;
            }

        fout<<z<<" "<<nrDiv1<<" "<<contor;
    return 0;
}
