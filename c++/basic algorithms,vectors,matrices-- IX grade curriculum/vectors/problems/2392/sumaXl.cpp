#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("suma1.in");
ofstream fout("suma1.out");
int main(){
    int n,x[100],small[11],nr,p=1,o=1,nou=0;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    fin>>nr;
    while(nr)
        {
            int uc=nr%10;
            nou=nou*10+uc;
            nr/= 10;
        }
        small[0]=0;
    while(nou)
        {
            int uc=nou%10;
            small[p]=uc;
            p++;
            nou /= 10;
        }
        small[0]=0;
         bool ok=0;
        for (int i=n-1; i>=n-p-3; i--)
        {
            if(ok==0)
                {
                    if(small[p-1]+x[i]<=9)
                        {x[i]=small[p-1]+x[i];
                        ok=0;}

                    else {
                        x[i]=small[p-1]+x[i]-10;
                        ok=1;
                    }
                }
            else     if(small[p-1]+x[i]+1<=9)
                        {
                            ok=0;
                            x[i]=small[p-1]+x[i]+1;
                        }
                     else {x[i]=small[p-1]+x[i]+1-10;
                            ok=1;}
            p--;
        }
    for(int i=0; i<=n-1; i++)
        fout<<x[i];
}
//not finished 0 points, donno why

