#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sort.in");
ofstream fout("sort.out");
int main(){
    int x[100],n,p=0,q,cont=0;
    while(fin>>q)
        x[p++]=q;
bool sortat;
do {
    sortat=true;
    for(int i=0; i<=p-2; i++)
        if(x[i]>x[i+1])
        {
            int aux=x[i];
            x[i]=x[i+1];
            x[i+1]=aux;
            sortat=false;
        }
}
while (!sortat);
if(cont!=0)
{for(int i=0; i<=p-1; i++)
    if( x[i]<100)
        fout<<x[i]<<" ";}
else fout<<"NU EXISTA";
}