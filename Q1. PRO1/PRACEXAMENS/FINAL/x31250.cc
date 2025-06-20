#include <iostream>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;

struct Producte {
    string nom;
    double mitjana; // 0 si aquest producte no s'ha servit a cap botiga
    int max;        // -1 si aquest producte no s'ha servit a cap botiga
    map<string, int> quantitats; // Mapa que guarda la quantitat servida a cada botiga per aquest producte
};

struct Botiga {
    string nom;
    int vendes;
};

// Pre: botigues.size() = p; a l'entrada hi ha disponible la informació de p botigues
// Post: botigues conté la informació de l'entrada;
//       max és el màxim servit en botigues;
//       mitj és la mitjana servida en botigues
void llegir_botigues(vector<Botiga>& botigues, double &mitj, int& max) {
    int p;
    cin >> p;
    botigues.resize(p);
    mitj = 0;
    max = -1;

    for (int i = 0; i < p; ++i) {
        cin >> botigues[i].nom >> botigues[i].vendes;
        mitj += botigues[i].vendes;
        max = (botigues[i].vendes > max) ? botigues[i].vendes : max;
    }

    if (p > 0) {
        mitj /= p;
    }
}

// Pre: prod s'ha venut a les botigues (els seus camps són coherents amb la informació a les botigues)
// Post: escriu la informació i format requerit per a totes aquelles botigues
//         que han rebut més de la mitjana indicada a prod
void print_info_producte(const Producte& prod, const vector<Botiga>& botigues) {
    cout << prod.nom << " " << prod.max << " ";
    
    for (const auto& kv : prod.quantitats) {
        if (kv.second > prod.mitjana) {
            cout << kv.first << " ";
        }
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<Producte> productes(n);

    for (int i = 0; i < n; ++i) {
        cin >> productes[i].nom;
        llegir_botigues(productes[i].quantitats, productes[i].mitjana, productes[i].max);
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    for (const Producte& prod : productes) {
        print_info_producte(prod, prod.quantitats);
    }

    for (const Producte& prod : productes) {
        cout << prod.nom << " " << prod.mitjana << endl;
    }

    return 0;
}