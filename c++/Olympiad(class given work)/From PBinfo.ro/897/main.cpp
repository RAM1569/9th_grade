#include <iostream>

using namespace std;

int sumcif(int n)
{
    int nr=0,r;
    r=n;
    while(r!=0)
    {
        nr=nr+r%10;
        r/= 10;
    }
    return nr;
}
int main(){
    int n;
    cin>>n;
    cout<<sumcif(n);

}
