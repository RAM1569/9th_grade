#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("i.in");
ofstream fout("i.out");
int main(){
    int val,n,p;
    fin>>val>>n>>p;
    int poz=n-p;
    int X[n];
    for(int i=0; i<=n-1; i++)
        fin>>X[i];
    for(int i=n-1; i>=p; i--)
        X[i+1]=X[i];
    X[p]=val;
    n++;
    for(int i=0; i<=n-1; i++)
        fout<<X[i]<<" ";
}