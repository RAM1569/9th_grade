#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ogl.in");
ofstream fout("ogl.out");
int main(){
    int n,x,nrWhile=0,nrOgl=0,ogl;
    cin>>n;
    while(n>nrWhile)
        {
            cin>>x;
            int copiex=x;
            while(copiex)
                {
                     ogl;
                    ogl=ogl*10+copiex%10;
                    copiex /= 10;
                }
            while(ogl!=0)
                {
                    int r=x%ogl;
                    x=ogl;
                    ogl=r;
                }
                if(x==1)
                nrOgl++;
        nrWhile++;
        }
       cout<<nrOgl;
}