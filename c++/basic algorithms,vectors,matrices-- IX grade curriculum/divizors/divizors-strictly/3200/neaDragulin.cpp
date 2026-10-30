#include <iostream>
using namespace std;
int main(){
    int n,k,nrWhile=0,nrFormat,p=1,copien,copien1,nrWhilek=0;
    cin>>n>>k;
    copien=n;
    copien1=n;
    while(copien>nrWhile)
        {
            copien /= 10;
            p *= 10;
            nrWhile++;
        }
    while(k-1>nrWhilek)
        {
            n=n*p+copien1;
            nrWhilek++;
        }
        cout<<n%72;
}