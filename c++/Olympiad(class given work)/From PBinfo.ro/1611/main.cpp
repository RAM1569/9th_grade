#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

ifstream fin("palindrom2.in");
ofstream fout("palindrom2.out");

int main()
{
    int C,a,ogl=0,n,nrogl=0,nrWhile=0,x,copie1=0,nrCifre=0,jum1=0,jum2=0,nrCifreAux=0,nrDeSPalin=0,nr2=0,rasp3,nrformat2=0,nrformat1=0;
    fin>>C>>n;
    while (n>nrWhile)
        {
            nrCifre=0;
            jum1=0;
            jum2=0;
            fin>>x;
            if(C==1)
            {
                ogl=0;
                copie1=x;
                while(x!=0)
                    {
                    ogl=ogl*10+x%10;
                    x/=10;
                    }
                    if(ogl==copie1)
                    nrogl++;
            }
            if(C==2)
            {
                int copie2=x;
                copie1=x;
                ogl=0;
                nrCifre = 0;
                jum1 = 0;
                jum2 = 0;
                nrDeSPalin = 0;


                while(x!=0)
                    {
                        x/=10;
                        nrCifre++;
                    }
                    if(nrCifre%2==0)
                    {
                        a=pow(10, nrCifre/2);
                        jum1=copie1/a;
                        nrCifreAux=nrCifre;
                        while(nrCifreAux>nrCifre/2)
                                    {
                                    jum2=jum2*10+copie1%10;
                                    copie1/=10;
                                    nrCifreAux--;

                                    }
                        }
                    if(nrCifre%2==1)
                        {
                        a=pow(10, (nrCifre-1)/2);
                        jum1=copie1/(a*10);
                        nrCifreAux=nrCifre;
                            while(nrCifreAux-1>(nrCifre)/2)
                                    {
                                        jum2=jum2*10+copie1%10;
                                        copie1/=10;
                                        nrCifreAux--;

                                    }
                                }

                            while(jum1!=0)
                                {
                                    if((jum1%10)!=(jum2%10))
                                        {nrDeSPalin++;}
                                        jum2 /=10;
                                        jum1 /=10;

                                }


                        if(nrDeSPalin==1)
                        nr2++;

            }
            if(C==3)
            {

                if(x<9)
                {
                fout<<x+1<<" ";
                }

                else {
                    int copie2=x;
                    copie1=x;
                    ogl=0;
                    ogl=0;
                    nrCifre = 0;
                    jum1 = 0;
                    jum2=0;
                    rasp3=0;
                    nrformat1=0;
                    nrformat2=0;
                    //face resetare
                        while(x!=0)
                        {
                            x/=10;
                            nrCifre++;
                        }
                        if(nrCifre%2==0)
                        {
                            a=pow(10, nrCifre/2);
                            jum1=copie1/a;
                            int jum1succesiva=jum1+1;
                            int copiejum1succesiva=jum1succesiva;
                            int copiejum1=jum1;
                            int jum2succesiva=0;
                            while(copiejum1!=0)
                                {
                                    jum2=jum2*10+copiejum1%10;
                                    copiejum1 /= 10;
                                }
                               nrformat1=jum1*a+jum2;
                               if(nrformat1<=copie1)
                                    {
                                    while(copiejum1succesiva!=0)
                                        {
                                            jum2succesiva=jum2succesiva*10+copiejum1succesiva%10;
                                            copiejum1succesiva /=10;
                                        }
                                    nrformat2=jum1succesiva*a+jum2succesiva;
                                    fout<<nrformat2<<" ";
                                    }

                                else fout<<nrformat1<<" ";



                        }
                        if(nrCifre%2==1)
                        {
                            a=pow(10, (nrCifre-1)/2);
                            int cifraMijloc=(copie2/a)%10;

                            jum1=copie1/(a*10);
                            int jum1succesiva=jum1;
                            int copiejum1succesiva=jum1succesiva;
                            int copiejum1=jum1;
                            int jum2succesiva=0;
                            while(copiejum1!=0)
                                {
                                    jum2=jum2*10+copiejum1%10;
                                    copiejum1 /= 10;
                                }
                               nrformat1=(jum1*10+cifraMijloc)*a+jum2;

                               if(nrformat1<=copie1)
                                    {
                                    while(copiejum1succesiva!=0)
                                        {
                                            jum2succesiva=jum2succesiva*10+copiejum1succesiva%10;
                                            copiejum1succesiva /=10;
                                        }
                                    nrformat2=((jum1succesiva*10)+cifraMijloc+1)*a+jum2succesiva*(1*a);
                                    fout<<nrformat2<<" ";
                                    }

                                else fout<<nrformat1<<" ";



                        }
                }
                }
            nrWhile++;
        }
        if(C==1)
        fout<<nrogl;
        else if(C==2)
                fout<<nr2;


return 0;
}

