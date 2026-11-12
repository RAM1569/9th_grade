#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int main(){
    int n, x[1000],s=1,nr=0;
    fin>>n;
    for(int i=0; i<=n-1; i++)
        fin>>x[i];
    for(int i=0; i<=n-1; i++)
        {
            int s=0,d=2, p,copiei=i;
            while(copiei>1)
                {
                    if(copiei%d==0)
                        {
                            p=0;
                            while(copiei%d==0)
                                {
                                    ++p;
                                    copiei /= d;

                                }
                            s=s*(p+1);
                        
                        }
                ++d;
                }
            for(int d=i; d<=n-1; d++)
                {
                    
                    int s1=0,e=2, f,copied=d;
                    while(copied>1)
                    {
                        if(copied%e==0)
                            {
                                f=0;
                                while(copied%e==0)
                                    {
                                        ++f;
                                        copied /= e;

                                    }
                                s1=s1*(f+1);
                            
                            }
                    ++f;
                    }
                    if(s1==s)
                    nr++;
                }
           
        }
    fout<<nr;
}