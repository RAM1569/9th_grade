#include <iostream>
#include <fstream>
using namespace std;
//A sequence of \(2 \cdot n\) natural numbers is called parity-matched (or paritar) 
//if each of its first \(n\) terms either has the same parity as any of its last \(n\) 
//terms, or is strictly smaller than any number of different parity found among them.
ifstream fin("paritar.in");
ofstream fout("paritar.out");
int main(){
    int n,x,maxP=-1,maxI=-1;
    fin>>n;
    for(int i=1; i<=n; i++)
        {
            fin>>x;
            if(x%2==0 && x>maxP)
                maxP=x;
            if(x%2==1 && x>maxI)
                maxI=x;
        }
    bool ok=true;
    for(int i=1; i<=n; i++)
        {
            fin>>x;
            if(x%2==1 && x>maxP)
                ok=1;
            else if(x%2==1 && x<maxP)
                    {
                        ok=0;
                        break;
                    }
            if(x%2==0 && x>maxI)
                ok=1;
            else if(x%2==0 && x<maxI)
                    {
                        ok=0;
                        break;
                    }
        }
        if(ok==1)
        fout<<"DA";
        else fout<<"NU";
        
}