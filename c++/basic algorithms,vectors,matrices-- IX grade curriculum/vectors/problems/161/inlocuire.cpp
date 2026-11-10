#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int main(){
    int n, X[200],i=0,s=0,mean,nr0;
    fin>>n;
    nr0=n;
    for(int i=0; i<=n-1; i++)
        fin>>X[i];
    for(int i=0; i<=n-1; i++)   
        s=s+X[i];
    
    for(int i=0; i<=n-1; i++)
            if(X[i]==0)
               nr0--; 
    mean=s/nr0;
    for(int i=0; i<=n-1; i++)
        {
            if(X[i]==0)
                {
                    X[i]=X[i+1];
                    X[i]=mean;
                }
        }
    for(int i=0; i<=n-1; i++)
        fout<<X[i]<<" ";
}