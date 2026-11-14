#include <iostream>
#include <fstream>
using namespace std;
//delete the second and last but one
ifstream fin("1.in");
ofstream fout("1.out");
int main(){
    int n,x[100];
    cin>>n;
    for(int i=0; i<=n-1; i++)
        cin>>x[i];
    for(int i=1; i<=n-1; i++)
        {
            x[i]=x[i+1];
        }
    n--; // the second deleted number
    x[n-2]=x[n-1];
    n--; // the last number;
    for(int i=0; i<=n-1; i++)
        cout<<x[i]<<" ";

}