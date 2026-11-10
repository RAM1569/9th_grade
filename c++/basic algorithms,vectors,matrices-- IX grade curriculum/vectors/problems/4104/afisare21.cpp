#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
/* Given two integer arrays, x (with n elements) and y (with m elements).
 The task is to print, in their original order and separated by a space, 
 all elements from array x that are strictly smaller than every element in array y. 
 If no such element exists, print NU EXISTA*/
int main(){
    int x[10000], y[10000],n,m;
    long long int min=100000001;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    fin>>m;
    for(int i=0; i<=n-1; i++)
        fin>>y[i];
    for(int i=0; i<=n-1; i++)
        if(y[i]<min)
            min=y[i];
    bool ok=false;
    for(int i=0; i<=n-1; i++)
        if(x[i]<min)
            {
                fout<<x[i]<<" ";
                ok=true;
            }
        if(ok==false)
            fout<<"NU EXISTA"; 
    
    
}