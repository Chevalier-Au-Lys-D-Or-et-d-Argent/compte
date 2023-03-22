#include <iostream>
using namespace std;
#include "Point.h"

// Programme principal pour tester les différentes méthodes de la classe Point
int main() {
    // Création d'un objet Point avec le constructeur qui prend deux paramètres réels
    Point p1 (1.0, 2.0);

    // Création d'un objet Point avec le constructeur de recopie
    Point p2 (p1);

    // Affichage des valeurs des attributs des deux objets créés
    cout << "p1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "p2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    // Translation de l'objet p1 avec la méthode translater qui prend deux paramètres réels
    p1.translater(3.0, 4.0);
    
    // Affichage des nouvelles valeurs des attributs de l'objet p1 après translation
    cout << "p1 après translation: (" << p1.getX() << ", " << p1.getY() << ")" << endl;

    return 0; // Indiquer que le programme s'est terminé correctement
}