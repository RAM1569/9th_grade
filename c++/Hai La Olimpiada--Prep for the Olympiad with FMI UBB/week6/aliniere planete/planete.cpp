#include <iostream>
using namespace std;
int main(){
    int a,b,r,c;
    cin>>a>>b>>c;
    r=a%b;
    int r1=b&c;
    int copiea=a, copieb=b, copiec=c;
    int copie1a=a, copie1c=c;
    while(r)
        {
            r=a%b;
            a=b;
            b=a;
        }
        int copie1b=b;
    while(r1)
        {
            r=b%c;
            b=c;
            c=r;
        }
       int r2=c%a;
     while(r2)
        {
            r2=copie1c%copiea;
            copie1c=copiea;
            copiec=r;
        }
    cout<<copie1a/c/copie1b/copie1c*copieb*copiec;
    
}