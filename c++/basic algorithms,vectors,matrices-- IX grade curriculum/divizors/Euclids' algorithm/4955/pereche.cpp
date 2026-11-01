#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
/*Given a sequence of $n$ pairs of !=0 natural numbers, determine the pair for which the least common multiple is minimal.
 If there are multiple such pairs, determine the one for which the sum of the values ​​is minimal. If there are still multiple such pairs, 
 determine the first one in the sequence.*/
 ifstream fin("pereche.in");
 ofstream fout("pereche.out");

 int main() {
    int a,b,n,nrWhile=0,copiea,copieb,r,CMMDC=999999,nr1,nr2,s;
    fin>>n;
    while(n>nrWhile)
        {
            fin>>a>>b;
            copiea=a;
            copieb=b;
            while(b!=0)
                {
                    r=a%b;
                    a=b;
                    b=r;
                }
                a=copiea/a*copieb; //CMMMC
                if(a<CMMDC)
                    {
                        nr1=copiea;
                        nr2=copieb;
                        CMMDC=a;
                        s=copiea+copieb;
                    }
                else if (a==CMMDC)
                        {
                            
                            if (s>(copiea+copieb))
                            {
                                nr1=copiea;
                                nr2=copieb;
                                s=nr1+nr2;
                            }
                        }
                nrWhile++;
        }
    fout<<nr1<<" "<<nr2;
 }