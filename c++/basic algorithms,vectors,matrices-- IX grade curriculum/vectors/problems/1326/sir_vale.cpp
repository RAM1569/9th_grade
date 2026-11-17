#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int main()
{
    int n, x[1000],d=0;
    bool ok=true;
    cin>>n;
    for(int i=0; i<=n-1; i++)
        cin>>x[i];
    if(x[d]<x[d+1])
        ok=false;
    if(x[d]>x[d+1])
    while(x[d]>x[d+1])
        {
            d++;
        }
    else ok=false;
    for(int i=n-1; i>=d; i--)
        if(x[i]<x[i-1]){

           break;
            ok=false; 
            
        }
        if (d == 0 || d == n - 1) {
        ok = false;
    }
    
    if(ok)
        cout<<"DA";
    else cout<<"NU";
    return 0;
}
