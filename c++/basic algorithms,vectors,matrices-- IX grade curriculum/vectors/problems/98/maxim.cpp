#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maxim4.in");
ofstream fout("maxim4.out");
int main() {
    int n,maxim=0, nrmax=1;
    fin>>n;
    int X[100];
    for(int i=0; i<=n-1; i++)
        fin>>X[i];
    for(int i=0; i<=n-1;i++)
        {
            if(X[i]>maxim)
            {
                maxim=X[i];
                nrmax=1;
            }
            else if(X[i]==maxim)
                 nrmax++;
        }
    fout<<maxim<<" "<<nrmax;

}