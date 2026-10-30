#include <iostream>
#include <fstream>

using namespace std;

    ifstream fin("af.in");
    ofstream fout("af.out");


int main()
{
    long long int n,nr1,nr2,nr3,nr0=0,s;
    char c,r;
    fin>>n;
    while(n>nr0)
        {
            fin>>nr1>>c>>nr2>>r>>nr3;

            if(c=='x')
                {
                if(nr1*nr2==nr3)
                s=1;
                else s=0;
                }
            else if(c=='+')
                    {
                        if(nr1+nr2==nr3)
                        s=1;
                        else s=0;
                    }
                 else if(c=='-')
                  {
                        if(nr1-nr2==nr3)
                        s=1;
                        else s=0;
                    }
                    else if(c==':' && nr2==0)
                                {
                                s=0;
                                 }
                        else if(c==':')
                            {
                        if(nr1/nr2==nr3)
                        s=1;
                        else s=0;
                            }
                    if(s==1)
                    fout<<"Adevarat"<<endl;
                    else fout<<"Fals"<<endl;
                nr0++;

        }
        return 0;

}
