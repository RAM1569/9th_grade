#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream fin("nerf.in");
ofstream fout("nerf.out");

int main()
{
    int n,nrWhile=0,a,b,x=0,s=0,cont0=0;
    fin>>n;
    while(n>nrWhile)
    {
        fin>>a>>b;
        x=x+pow(a,b);
        nrWhile++;
    }
    fout<<x<<'\n';
    while(x!=0)
    {
        if(x%10==0)
            cont0++;
        s=s+x%10;
        x/=10;
    }
    fout<<s<<'\n'<<cont0<<'\n';
    return 0;
}
