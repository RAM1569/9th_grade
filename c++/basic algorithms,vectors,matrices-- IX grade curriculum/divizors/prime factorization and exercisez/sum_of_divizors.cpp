#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,d=2,p,s=1;
    cin>>n;
    while(n>1)
        {
            if(n%d==0)
                {
                    p=0;
                    while(n%d==0)
                        {
                            p++;
                            n /= d;
                        }
                    int x=(pow(d,p+1)-1)/(d-1);
                    s=s*x;
               
                }
            d++;
        }
        cout<<s;
}