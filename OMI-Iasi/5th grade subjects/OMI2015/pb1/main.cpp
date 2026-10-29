#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream fin("centrale.in");
ofstream fout("centrale.out");

int main()
{
    int n,nrWhile=0,x,nr=0,nrMijcont=0,nrNr=0;
    fin>>n;
    while(n>nrWhile)
    {
        fin>>x;
        x=x/10;
        nrMijcont=x%10;
        while(x>9)
        {
            if(x%10!=nrMijcont)
            {
                nr=0;
                break;
            }
            else nr=1;
            x/=10;
        }

            if(nr==1)
                nrNr++;
                nrWhile++;

    }
    fout<<nrNr;
    return 0;
}
