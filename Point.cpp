#include "Point.h"
#include <iostream>
using namespace std;

    Point::Point() {
        x = 0;
        y = 0;
    }

    // Constructeur qui prend deux paramètres réels et initialise un point avec ces valeurs
    Point::Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    // Constructeur de recopie qui prend une référence constante à un objet Point et crée une copie de cet objet
    Point::Point(const Point& p) {
        x = p.x;
        y = p.y;
    }

    // Mutateur pour changer la valeur de l'attribut d'abscisse
    void Point::setX(double x) {
        this->x = x;
    }

    // Mutateur pour changer la valeur de l'attribut d'ordonnée
    void Point::setY(double y) {
        this->y = y;
    }

    // Accesseur pour obtenir la valeur de l'attribut d'abscisse
    double Point::getX() const {
        return x;
    }

    // Accesseur pour obtenir la valeur de l'attribut d'ordonnée
    double Point::getY() const {
        return y;
    }

    // Méthode pour translater le point en ajoutant les valeurs passées en paramètre aux attributs d'abscisse et d'ordonnée
    void Point::translater(double dx, double dy) {
        x += dx;
        y += dy;
    }

    // Méthode pour translater le point en ajoutant les valeurs des attributs d'un autre objet Point aux attributs de cet objet
    void Point::translater(Point p) {
        x += p.x;
        y += p.y;
    }

    
    Point& Point::operator+=(Point point) {
      x += point.x;
      y += point.y;
    
      return *this;
    }

    ostream& operator<<(ostream& gogol,Point point)
    {
       gogol << point.getX() <<point.getY();

      return gogol;
    }

    Forme::Forme() {      
    }

    // Constructeur qui prend deux paramètres réels et initialise un point avec ces valeurs
    Forme::Forme(Point point_rigolo) {
    }

    // Constructeur de recopie qui prend une référence constante à un objet Point et crée une copie de cet objet
    Forme::Forme(const Forme& f) {
    }