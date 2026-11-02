#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool prim = true; // cu presupunerea ca este prim;
    if(n<2 ||(n%2==0 && n!=2))
        prim = false;
    for(int d=3; d*d<=n; d += 2)
        if(n%d==0)
        {
            prim=false;
            break;
        }

if(prim)
cout<<"este";
else cout<<"nu este";
}