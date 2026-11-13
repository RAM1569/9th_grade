#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("r.in");
ofstream fout("r.out");
int main(){
    int n=10, x[9]; 
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    for (int p = n - 1 ; p >= 0 ; p --)
    if(x[p] % 2 == 0) {
        for(int i = p ; i < n - 1; i ++)
            x[i] = x[i+1];
        n --;
    }
     for(int i=0; i<=n-1; i++)
        fout<<x[i]<<" ";    
}