#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("tablita.in");
ofstream fout("tablita.out");

int main()
{
    int n,rand=1;
    fin>>n;
    while(n>rand)
    {
        n=n-rand;
        rand++;

    }
    fout<<rand;
    return 0;
}
