#include <iostream>
// all prime numbers smaller than n
using namespace std;
int main(){
    int n,copiei,d=2;
    cin>>n;
    cout<<2<<" ";
    for(int i=3; i<=n; i++)
        {
            bool prim = true;
            copiei=i;
            for(d=2; d*d<=copiei; d++)
                if(copiei%d==0)
                    {
                        prim = false;
                        break;
                    }
                if(prim)
                cout<<i<<" ";
        }
}