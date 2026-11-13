#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("r.in");
ofstream fout("r.out");
int main() {
    int x[9],p,n;
    n=10;
    fin>>p;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    for(int f=p; f<=n-1; f++)
        x[f]=x[f+1];
        n--;
    for(int i=0; i<=n-1; i++)
        fout<<x[i]<<" ";
}