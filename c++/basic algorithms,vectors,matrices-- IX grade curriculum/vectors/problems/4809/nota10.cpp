#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int x[1000000];
int main(){
    int n,cont=0;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    for(int i=0; i<=n-2; i++)
        if(x[i]<x[i+1])
            cont++;
    fout<<cont+1;
}