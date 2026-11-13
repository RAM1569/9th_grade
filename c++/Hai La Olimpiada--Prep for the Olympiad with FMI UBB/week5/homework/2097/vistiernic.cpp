#include <iostream>
#include <fstream>
//how many 0 are in an array(multiplied)
using namespace std;
ifstream fin("vistiernic.in");
ofstream fout("vistiernic.out");
int main(){
    int n,x,nrWhile=0,cont2=0,cont5=0,nr0;
    fin>>n;
    while(n>nrWhile)
        {
            fin>>x;
            while(x%2==0)
                {
                    x/=2;
                    cont2++;
                }
             while(x%5==0)
                {
                    x/=5;
                    cont5++;
                }
            nrWhile++;
        }
    if(cont2>=cont5)
    nr0=cont5;
    else nr0=cont2;
    fout<<nr0;
}