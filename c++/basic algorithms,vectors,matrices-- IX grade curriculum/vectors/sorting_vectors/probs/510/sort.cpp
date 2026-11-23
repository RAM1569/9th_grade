#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sort.in");
ofstream fout("sort.out");
//sort all prime numbers
int main(){
    int x[1000],n,p=0,v[1000];
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
bool sort;
do
{
    sort=true;
    for(int i=0; i<=n-2; i++)
        if(x[i]>x[i+1])
        {
            int aux=x[i];
            x[i]=x[i+1];
            x[i+1]=aux;
            sort=false;
        }
} while (!sort);
    for(int i=0; i<=n-1; i++)
        {
            int a=x[i];
            bool prim=true;
            if(a<2)
            prim=false;
            for(int d=2; d*d<=a; d++)
                if(a%d==0)
                    prim=false;
            if(prim)
                v[p++]=x[i];
        }
    for(int i=0; i<=p-1; i++)
        fout<<v[i]<<" ";
}
