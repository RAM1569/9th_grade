#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int main(){
    int n, x[1000];
    cin>>n;
    for(int i=0; i<=n-1; i++)
        cin>>x[i];
    for(int i=0; i<=n-1; i++)
        {
            for(int d=i; d<=n-1; d++)
                if(x[i]<x[d])
                    {
                        fout<<x[d]<<" ";
                        break;
                    }
                else if(d==n-1)
                        {
                            fout<<"-1"<<" ";
                        }
                    else continue;
        }
}