#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int k,nr=0,whilecont=0,coutnr=0,kcopie,cifraControl;
    cin>>k;
    kcopie=k-18;
    if(k<19)
    {
        //caz in care nu am cifra de control in fata
        if(k%2==0)
            cout<<k/2;
        else cout<<(k+1)/2;
    }
    else
    {
        cifraControl=kcopie/30+1;
        kcopie=kcopie-(cifraControl-1)*30;
        if(kcopie%3==1)
            cout<<cifraControl;
        else {
                //daca mu e de control=>e de la 1-9
                //elimin nr de cifre de control si vad la cum si cat se imparte
                kcopie=kcopie-(kcopie/3);
            if(kcopie%2==0 && kcopie<=2)
                cout<<0;
            else if(kcopie%2==0)
                    cout<<(kcopie-2)/2;
                else cout<<(kcopie-1)/2


        }


    }
    return 0;
}
