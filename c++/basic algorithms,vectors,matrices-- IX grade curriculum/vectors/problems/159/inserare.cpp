#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int main(){
    int n,x[50];
    cin>>n;
    for(int i=0; i<=n-1; i++)
        cin>>x[i];
    for(int i=n-1; i>=0; i--)
        if(x[i]%2==0)
            {
                for(int d=n-1; d>=i+1; d--)
                        x[d+1]=x[d];
                x[i+1]=2*x[i];
                n++;
            }
    for(int i=0; i<=n-1; i++)
        cout<<x[i]<<" ";        
}   