#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("i.in");
ofstream fout("i.out");
int main(){
    int n=4;
    int x[n]={12, 14 ,15, 16, 17};
    x[n++]=4;
    for(int i=0; i<=n-1; i++)
        fout<<x[i]<<" ";
    
    
}