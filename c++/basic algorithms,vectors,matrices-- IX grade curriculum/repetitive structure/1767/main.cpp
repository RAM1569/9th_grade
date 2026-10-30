#include <iostream>
#include <fstream>

using namespace std;
 ifstream fin("multiple.in");
 ofstream fout("multiple.out");

int main()
{
    long long int t,n,k,nr=0,r1=0;
    fin>>t;
    while(nr<t)
        {
             fin>>n>>k;
             for(int i=n+1; i<=n+k; i++)
                {

                    if(i%k==0 && r1==0)
                    {
                    fout<<i;
                     r1=i;
                     }
                }
            fout<<endl;
            nr++;
            r1=0;
        }
}
// v1 cu limita depasita
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("multiple.in");
ofstream fout("multiple.out");

long long T, n, k;

int main() {
    fin >> T;
    while (T--) {
        fin >> n >> k;
        long long rez = (n / k + 1) * k;
        fout << rez << "\n";
    }
    return 0;
}
//v2 facut de gemini CU MORTII EI DE FORMULA MATEMATICA dar gotta give credit where it's due
