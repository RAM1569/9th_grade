#include <iostream> 
#include <fstream> 
#include <cmath> // Folosim cmath în loc de math.h în C++

using namespace std; 

ifstream fin("1.in"); 
ofstream fout("1.out"); 

// Determină câte perechi de elemente din tablou au aceeași sumă a divizorilor.
int main() {     
    int x[1000], n, numbers = 0;     
    fin >> n;     
    
    for (int i = 0; i <= n - 1; i++)         
        fin >> x[i];     
        
    for (int i = 0; i <= n - 1; i++) {             
        // 1. Calculăm suma divizorilor pentru x[i]
        int copiei = x[i], d = 2;              
        int s = 1; // CORECTAT: s trebuie să fie 1 (pentru înmulțiri)
        
        while (copiei > 1) {                     
            if (copiei % d == 0) {                             
                int p = 0;                             
                while (copiei % d == 0) {                                     
                    ++p;                                     
                    copiei /= d;                                 
                }                             
                int m = round(pow(d, p + 1)); // CORECTAT: round() previne erorile de precizie ale pow
                s = s * (m - 1) / (d - 1);                         
            }                     
            ++d;                 
        }             
        
        // 2. Îl comparăm DOAR cu elementele de după el (pentru a forma perechi unice i < j)
        for (int j = i + 1; j <= n - 1; j++) {                     
            // Calculăm suma divizorilor pentru x[j]
            int copiep = x[j], dp = 2; // CORECTAT: am schimbat numele din d în dp și p în j pentru a evita conflictele
            int s1 = 1; // CORECTAT: s1 trebuie să fie 1
            
            while (copiep > 1) {
                if (copiep % dp == 0) {                             
                    int p_factor = 0;                              
                    while (copiep % dp == 0) {                                     
                        ++p_factor;                                     
                        copiep /= dp;                                 
                    }                             
                    int m1 = round(pow(dp, p_factor + 1));
                    s1 = s1 * (m1 - 1) / (dp - 1);                         
                }                     
                ++dp;                                      
            }
            
            // CORECTAT: Am șters punct și virgulă (;) de după if
            if (s1 == s) {
                numbers++;         
            }
        }             
    }     
    fout << numbers; 
    return 0;
}
