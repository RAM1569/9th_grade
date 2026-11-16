#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int main(){
    int n,x[1000],min=1073741825;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    for(int i=0; i<=n-1; i++)
        if(x[i]<min)
            min=x[i];
    for(int i=n-1; i>=0; i--)
        if(x[i]==min)
        {
            n -= 1;
            for(int d=i; d<=n-1; d++)
                x[d]=x[d+1];
        }

    for(int i=0; i<=n-1; i++)
        fout<<x[i]<<" ";
}