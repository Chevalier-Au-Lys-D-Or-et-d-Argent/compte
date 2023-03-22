class Point { // Définition de la classe Point
   private: // Section privée de la classe
    double x; // Attribut d'abscisse
    double y; // Attribut d'ordonnée

   public: // Section publique de la classe
    // Constructeur sans paramètres qui initialise un point à l'origine
    Point();

    // Constructeur qui prend deux paramètres réels et initialise un point avec ces valeurs
    Point(double x, double y);

    // Constructeur de recopie qui prend une référence constante à un objet Point et crée une copie de cet objet
    Point(const Point& p);

    // Mutateur pour changer la valeur de l'attribut d'abscisse
    void setX(double x);

    // Mutateur pour changer la valeur de l'attribut d'ordonnée
    void setY(double y);

    // Accesseur pour obtenir la valeur de l'attribut d'abscisse
    double getX() const;

    // Accesseur pour obtenir la valeur de l'attribut d'ordonnée
    double getY() const;

    // Méthode pour translater le point en ajoutant les valeurs passées en paramètre aux attributs d'abscisse et d'ordonnée
    void translater(double dx, double dy);

    // Méthode pour translater le point en ajoutant les valeurs des attributs d'un autre objet Point aux attributs de cet objet
    void translater(Point p);
};