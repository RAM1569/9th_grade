#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream  fin("conversie_b_10.in");
ofstream  fout("conversie_b_10.out");
int main(){
    int b,n,restruct=0,p=0,uc;
    fin>>n>>b;
    while(n)
        {
            uc=n%10;
            restruct=restruct+(pow(b,p))*uc;
            p++;
            n/=10;
        }
    fout<<restruct;
}