#include <iostream>
#include <cmath> // Include sqrtl și round

using namespace std;

int main()
{
    // Optimizare pentru viteză de citire/afișare
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, m;
    if (!(cin >> n)) return 0;

    bool gasit = false;

    // Pornim de la 0 pentru că 0 este număr triunghiular (0*1/2 = 0)
    for (long long int i = 0; i * (i + 1) / 2 <= n; i++)
    {
        m = n - (i * (i + 1) / 2);

        // Adăugăm LL lângă 8 (8LL) ca să obligăm calculatorul să facă înmulțirea pe 64 de biți (long long)
        // Astfel prevenim overflow-ul (numerele negative date de depășire)
        long long int delta = 1 + 8LL * m;

        // Folosim sqrtl (Square Root Long) pentru precizie maximă pe numere mari
        long long int rad = round(sqrtl(delta));

        if (rad * rad == delta && (rad - 1) % 2 == 0)
        {
            long long int j = (rad - 1) / 2;

            cout << (i * (i + 1) / 2) << " " << (j * (j + 1) / 2) << "\n";
            gasit = true;
            break; // Oprim bucla imediat ce am găsit prima pereche
        }
    }

    // Verificarea este corectă: dacă am ieșit din for și gasit e tot false, afișăm NU
    if (gasit == false)
    {
        cout << "NU\n";
    }

    return 0;
}

