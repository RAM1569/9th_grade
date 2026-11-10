#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int main(){
    int n, X[100],nrTriunghi=0;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>X[i];
    for(int d=0; d<=n-2; d++)
        {
            for(int p=n-1; p>d; p--)
                {
                    if(d+1==p)
                    continue;
                    else for(int e=d+1; e<p; e++)
                            if(X[d]+X[e]>X[p] && X[p]+X[e]>X[d] && X[d]+X[p]>X[e])
                                nrTriunghi++;
                }
                

        }
    fout<<nrTriunghi;
}