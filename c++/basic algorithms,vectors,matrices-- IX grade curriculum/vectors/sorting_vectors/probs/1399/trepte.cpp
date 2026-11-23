#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int main(){
    int x[1000],n,contNeg=0,contPoz=0;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    for(int i=0; i<=n-1; i++)
        if(x[i]<0)
            contNeg++;
    for(int i=0; i<=n-1; i++)
        if(x[i]>0)
            contPoz++;
bool sortat;
do {
    sortat=true;
    for(int i=0; i<=n-2; i++)
    if(x[i]>x[i+1])
    {
        int aux=x[i];
        x[i]=x[i+1];
        x[i+1]=aux;
        sortat=false;
    }
}
while (!sortat);

bool sortat1;
do {
    sortat1=true;
    for(int i=0; i<=contNeg-2; i++)
    if(x[i]<x[i+1])
    {
        int aux=x[i+1];
        x[i+1]=x[i];
        x[i]=aux;
        sortat1=false;
    }
}
while (!sortat1);
bool sortat2;
do{
    sortat2=true;
    for(int i=contNeg; i<=n-1; i++)
    if(x[i]<x[i+1] && x[i] != 0)
    {
        int aux=x[i+1];
        x[i+1]=x[i];
        x[i]=aux;
        sortat2=false;
    }
}
while (!sortat2);

    for(int i=0; i<=n-1; i++)
        fout<<x[i]<<" ";
}