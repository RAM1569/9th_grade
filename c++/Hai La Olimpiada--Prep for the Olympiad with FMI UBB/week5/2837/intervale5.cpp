#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("intervale5.in");
ofstream fout("intervale5.out");
int main(){
    int x,vf[101]={0},ok=1;
    while(fin>>x)
        vf[x]=1;
    for(int i=0; i<100; i++)
        for(int j=i+1; j<101; j++)
            if (vf[i]!=0 && vf[j]!=0 && j-i>=2)
                {
                    fout<<i<<" "<<j;
                    int ok=1;
                    break;
                }
                else break;
            if(ok==0)
            fout<<"nu exista";



    }           
