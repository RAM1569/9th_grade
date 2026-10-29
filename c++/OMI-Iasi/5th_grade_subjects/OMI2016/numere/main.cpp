#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");

int main()
{
    int n,nrWhile=0,x,nrCifre=0,s=0;
    fin>>n;
    while(n>nrWhile)
    {
        fin>>x;
        nrCifre=0;
        int copiex=x;
        while(copiex!=0)
        {
            nrCifre++;
            copiex /= 10;
        }
        nrCifre=(nrCifre-1)/2;
        int p=pow(10,nrCifre);
        x=x/p;
        if(x%2==1)
            s=s+x%10;

        nrWhile++;

    }
    fout<<s;
    return 0;
}
