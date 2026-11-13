#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("suma1.in");
ofstream fout("suma1.out");
/*We define a "large number" as one that contains too many digits to be stored using existing data types, and a "small number"
 as one that can be stored using them.
Given two numbers—one large and one small, both positive—calculate their sum.*/
int main(){
    int n,x[100],small[11],nr,p=0,o=1,nou=0;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    fin>>nr;
    while(nr)
        {
            int uc=nr%10;
            small[p]=uc;
            p++;
            nr /= 10;
        }
        small[p]=0;
        small[p+1]=0;
         bool ok=0;
         int copiep=p;
         p=0;
        for (int i=n-1; i>=n-copiep-1; i--)
        {
            if(ok==0)
                {
                    if(small[p]+x[i]<=9)
                        {x[i]=small[p]+x[i];
                        ok=0;}

                    else {
                        x[i]=small[p]+x[i]-10;
                        ok=1;
                    }
                }
            else     if(small[p]+x[i]+1<=9)
                        {
                            ok=0;
                            x[i]=small[p]+x[i]+1;
                        }
                     else {x[i]=small[p]+x[i]+1-10;
                            ok=1;}
            p++;
        }
    for(int i=0; i<=n-1; i++)
        fout<<x[i];
}
//not finished 0 points, donno why, //new day, eliminated 2 whiles and it still gives 0,

