#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("triviador.in");
ofstream fout("triviador.out");


int main()
{
    int n,a,b,c,nr=0,s=0,max1=0,max2;
    fin>>n;
    while(n>nr)
            {
                s=0;
                fin>>a>>b>>c;
                s=a+b+c;
                if(max1<s)
                    {
                    max2=max1;
                    max1=s;
                    }
                else if(max2<s && s!=max1)
                        {max2=s;}
                        nr++;
                        }
            if(max1!=max2)
            fout<<max1<<" "<<max2;
            else fout<<"TOTI SUNT CASTIGATORI";
    return 0;
}
