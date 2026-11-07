#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ex.in");
ofstream fout("ex.out");
int main(){
    int v[100],n;
    int m[1][1];
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>m[i][j];
        //citirea unei matrici
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cout<<m[i][j]<<" ";
            cout<<'\n';
        //afisarea unei matrici
        
}