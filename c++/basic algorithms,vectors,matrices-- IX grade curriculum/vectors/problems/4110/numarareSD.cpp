#include <iostream>
#include <fstream>
#include <cmath> // Modificat math.h în cmath pentru round și pow
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");

int main(){
    int x[1000],n,s=1,s1=1,numbers=0;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
        
    // MODIFICARE: i merge până la n-2 pentru că ultimul element nu mai are cu cine să facă pereche în față
    for(int i=0; i<=n-2; i++) 
        {
            int copiei=x[i],d=2,p; 
            s=1; // s1 a fost mutat în interiorul celei de-a doua bucle
            while(copiei>1)
                {
                    if(copiei%d==0)
                        {
                            p=0;
                            while(copiei%d==0)
                                {
                                    ++p;
                                    copiei/=d;
                                }
                            int m=round(pow(d,p+1)); // Adăugat round() și aici pentru siguranță
                            s=s*(m-1)/(d-1);
                        }
                    ++d;
                }
                
            // MODIFICARE: Mergem de la i+1 până la n-1 pentru a genera PERECHI UNICE (evităm duplicarea)
            for(int t=i+1; t<=n-1; t++) 
                {
                    int copiep=x[t],d2=2,e; // Redenumit d în d2 pentru claritate
                    s1=1; // CORECTARE CRITICĂ: s1 trebuie resetat la 1 PENTRU FIECARE element x[t] separat!
                    
                    // CORECTARE CRITICĂ: Lipsea instrucțiunea `while(copiep > 1)` pe care ai avut-o la primul element!
                    while(copiep > 1) 
                    {
                        if(copiep%d2==0)
                            {
                                e=0;
                                while(copiep%d2==0)
                                    {
                                        ++e;
                                        copiep/=d2;
                                    }
                                int m=round(pow(d2,e+1));
                                s1=s1*(m-1)/(d2-1);
                            }
                        ++d2;
                    }
                    
                    // Mutat verificarea în interiorul buclei structurate pe perechi
                    if(s1==s)
                        numbers++;
                }
        }
    fout<<numbers;
    return 0;
}
