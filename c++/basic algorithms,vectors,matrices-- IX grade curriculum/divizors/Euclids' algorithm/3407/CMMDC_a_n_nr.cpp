#include <iostream>
#include <fstream>
#include <stdint.h>
using namespace std;
//CMMMC of n numbers.
ifstream fin("aoc2020.in");
ofstream fout("aoc2020.out");
int main (){
    long long int x,s,copies,copiex,r;
    //V1-uint8_t n,nrWhile=0 gave me 80 points, learned that uint8_t=unsigned char and in doing so, it made me revise int types
    unsigned int n,nrWhile=0;
    fin>>n;
    while(n>nrWhile)
        {
            fin>>x;
            if(nrWhile==0)
            {
                s=x;
            }
            else {
                copiex=x;
                copies=s;
                while(copies)
                {
                    r=copiex%copies;
                    copiex=copies;
                    copies=r;
                }
                s=s/copiex*x;
            }
            nrWhile++;
        }
        fout<<s;
}