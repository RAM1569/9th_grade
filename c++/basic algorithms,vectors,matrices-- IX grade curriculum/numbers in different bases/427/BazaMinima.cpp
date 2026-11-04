#include <iostream>
using namespace std;
//find the lowest base n number could be written in.
int main(){
    int n,x,b=16,nrWhile=0,cifmax=0;
    cin>>n;
    while(n>nrWhile)
        {
            cin>>x;
            while(x)
                {
                    if(x%10>cifmax)
                    cifmax=x%10;
                    x /= 10;
                }
        nrWhile++;
        }
    cout<<cifmax+1;
    //basically I need to find the biggest figure that there is in a number and that's the base, and since the numbers that are
    //given are in base ten, i can simply check with %10 to find the last one and store it.
}