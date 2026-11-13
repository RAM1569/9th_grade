#include <iostream>
using namespace std;
//permutations
int main(){
    int n, x[16],aux;
    cin>>n;
    int copiea=n;
    for(int a=0; a<=n-1; a++)  
        cin>>x[a];
    for(int a=0; a<=n-1; a++)  
        cout<<x[a]<<" ";
        cout<<'\n';
    
        while(copiea-1)
        {
            aux=x[0];
            for(int a=0; a<=n-2; a++)
                    {
                        x[a]=x[a+1];
                    }
            x[n-1]=aux;
            for(int b=0; b<=n-1; b++)
                    cout<<x[b]<<" ";
            cout<<'\n';
        copiea--;
        }
}