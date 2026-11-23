#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("crb.in");
ofstream fout("crb.out");
int main(){
    int x[1000],n,v[1000],cont=0;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    for(int i=0; i<=n-1; i++)
        v[i]=x[i];
bool sortat;
do
{
    sortat=true;
    for(int i=0; i<=n-2; i++)
        if(x[i]<x[i+1])
            {
                int aux=x[i];
                x[i]=x[i+1];
                x[i+1]=aux;
                sortat=false;
            }
} while (!sortat);
    for(int i=0; i<=n-1; i++)
        if(x[i]==v[i])
            cont++;
fout<<cont;
}