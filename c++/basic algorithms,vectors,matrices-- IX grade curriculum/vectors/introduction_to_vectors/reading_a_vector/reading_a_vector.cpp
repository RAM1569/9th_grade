#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("r.in");
ofstream fout("r.out");
int main() {
    int X[11], n;
    n=10;
    for(int i=1; i<=n; i++)
        fin>>X[i];
    for(int i=n; i>=1; i--)
        fout<<X[i]<<" ";
        fout<<'\n'<<X[9];
}
/*learned teory:how to index from 0 and 1
                how to give values to a vector 
                how to show a vector *\