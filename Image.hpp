//
//  Image.hpp
//  Module_Image
//
//  Created by Virgile Broillet on 24/01/2023.
//

#ifndef Image_hpp
#define Image_hpp

#include "Pixel.hpp"

#endif /* Image_hpp */

//
//  main.cpp
//  Module_Image
//
//  Created by Virgile Broillet & Ithier Débauché & Marie Graff on 24/01/2023.
//

class Image{

 private :

    Pixel * tab;   // le tableau 1D de pixel
    unsigned int dimx, dimy;   // les dimensions de l'image

 public :

   // Constructeur par défaut de la classe: initialise dimx et dimy à 0
   // ce constructeur n'alloue pas de pixel
    Image ();
    
   // Constructeur de la classe: initialise dimx et dimy (après vérification)
   // puis alloue le tableau de pixel dans le tas (image noire)
    Image (unsigned int const dimensionX, unsigned int const dimensionY);

   // Destructeur de la classe: déallocation de la mémoire du tableau de pixels
   // et mise à jour des champs dimx et dimy à 0
    ~Image();

   // Accesseur : récupère le pixel original de coordonnées (x,y) en vérifiant leur validité
   // la formule pour passer d'un tab 2D à un tab 1D est tab[y*dimx+x]
    Pixel getPix (unsigned int const x, unsigned int const y) const;

   // Mutateur : modifie le pixel de coordonnées (x,y)
    void setPix (unsigned int const x, unsigned int const y, Pixel& couleur);

   // Dessine un rectangle plein de la couleur dans l'image (en utilisant setPix, indices en paramètre compris)
    void dessinerRectangle(unsigned int const Xmin, unsigned int const Ymin, unsigned int const Xmax, unsigned int const Ymax, Pixel& couleur);

   // Efface l'image en la remplissant de la couleur en paramètre
   // (en appelant dessinerRectangle avec le bon rectangle)
    void effacer (Pixel const couleur);
    
   // Effectue une série de tests vérifiant que le module fonctionne et
   // que les données membres de l'objet sont conformes
    void testRegression () const ;

};
