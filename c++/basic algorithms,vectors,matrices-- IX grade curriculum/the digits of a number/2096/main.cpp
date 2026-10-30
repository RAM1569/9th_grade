#include  <iostream>
#include <math.h>

using namespace std;

ifstream fin("xyz.in");
ofstream fout("xyz.out");

int main()
{
    int x,y,z,nr=0,nrCon=0;
    fin>>x>>y>>z;
    nrCon=y;
    while(x-1>nr)
        {
        nrCon=nrCon*10+z;
        nr++;
        }
    fout<<nrCon;

    return 0;
}
