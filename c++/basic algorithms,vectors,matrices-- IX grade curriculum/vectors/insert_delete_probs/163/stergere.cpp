#include <iostream>
using namespace std;
//Given an array of $n$ natural numbers, remove all elements that are prime numbers.
int main(){
    // int x[1000],n;
    // cin>>n;
    // for(int i=0; i<=n-1; i++)
    //     cin>>x[i];
    int n=5, x[1000]={7,8,9,17,1};

    for(int i=0; i<=n-1; i++)
        {
            bool prim = true;
            if(x[i]<2)
            prim = false;
            for(int d=1; d*d<=x[i]; d++)
                if(x[i]%d==0)
                bool prim = false;
            if(prim)
            {
                for(int e=i; e<=n-1; e++)
                {
                    x[e]=x[e+1];
                }
                n--;
            }
        }  
     for(int i=0; i<=n-1; i++)
        cout<<x[i]<<" ";
}