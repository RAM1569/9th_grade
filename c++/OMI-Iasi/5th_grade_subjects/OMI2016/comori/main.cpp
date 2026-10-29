#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("comori.in");
ofstream fout("comori.out");

int main()
{
    int x,n,nrAnt=0,contPt0=0,nrWhile=0,nr=0;
    fin>>n;
    while(n>nrWhile)
    {
        if(nrWhile=0)
            nrAnt=0;
        else nrAnt=x;
        fin>>x;
        if(x>nrAnt)
            nr++;
        else fout<<nrWhile+1<<" ";
        nrWhile++;
    }
    if(nr+1==n)
    fout<<0;
    return 0;
}
