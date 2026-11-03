#include <iostream> 
#include <fstream>
using namespace std;
ifstream fin("sirdivk.in");
ofstream fout("sirdivk.out");
int main(){
    int a,b,c,n,k,nrWhile=1,nrNr=0;
    long long int nr;
    fin>>a>>b>>c>>n>>k;
    nr=a;
    while(n>nrWhile)
        {
            if(nr%10==a)
            nr=nr*10+b;
            else if(nr%10==b)
                    nr=nr*10+c;
                else nr=nr*10+a;
            if(nr%k==0)
                nrNr++;
            nrWhile++;
        }
    fout<<nrNr;
}