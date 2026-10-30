#include <iostream>

using namespace std;

int main(){
    int n,copien,nr,j,i;
    cin>>n;
    for( i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                for(j=i; j<=n; j++)
                    {   
                        copien=n;
                        if(n%j==0)
                        {
                            copien=copien-i;
                            nr=0;
                            copien=copien-j;
                            if(n%copien==0 && copien < j && i<copien)
                            {nr=1; break;}
                            else continue;
                        }
                    }
                    if(nr==1)
                    {
                        cout<<i<<" "<<copien<<" "<<j;
                        cout<<'\n';
                    }
                    else continue;
                    if(n==i)
                    cout<<"nu exista";

            }
        }
}