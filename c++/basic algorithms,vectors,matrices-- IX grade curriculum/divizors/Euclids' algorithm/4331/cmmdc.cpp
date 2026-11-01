#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
ifstream fin("4331.in");
ofstream fout("4331.out");
int main() {
    int n,x,nrWhile=0,max=0,r;
    long int min=1000000000;
    cin>>n;
    while(n>nrWhile)
        {
           cin>>x;
            if(x>max)
            max=x;
            if(x<min)
            min=x;
            nrWhile++;
        }
    while(min!=0)
        {
            r=max%min;
            max=min;
            min=r;
        }
        cout<<max;
}