#include <iostream>
#include <fstream>
using namespace std;

fstream fin("p4.in");
ofstream fout("p4.out");

int nrPasi(long long n){
    int c = 0;
    while (n > 1){
        if (n %2 == 0)
            n /= 2;
        else
            n = n * 2 + 2;
        c++;
    }
    return c; // pentru a determina nr de pasi din suma cred??
}
 int void populeazaVectorSumaPartiala(int k, int );
            {
                suma[k]=suma[k-1]+nrPasi;
            }

int main(){
    for(int i=1, i<=MAX; i++)
    populeazaVectorSumePartiale([i],nrPasi(i));
    int T;
    long long x, y;
     fin >> T;
    for(int i = 1; i <= T; i++){
        fin >>x >>y;
        for(int j = x; j <=y; j++){
            suma += nrPasi(j);
        }
        fout<< suma[y]-suma[x-1]<< '\n';
        suma = 0;
    }
    fin.close();
    fout.close();
    return 0;
}
