#include <iostream>

#include <math.h>
using namespace std;
//show a number as a sum of powers of 2
int main(){
    long long int n,s=0,uc,p=1;
    cin>>n;
    while(n)
        {
            
            if(n%2==1) {
                
                cout<<p<<" ";
                }
            n /= 2;
            p *= 2;
        }
    
    }