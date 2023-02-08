//
//  PIxel.hpp
//  Module_Image
//
//  Created by Virgile Broillet on 24/01/2023.
//

#ifndef PIxel_hpp
#define PIxel_hpp


#endif /* PIxel_hpp */

//
//  main.cpp
//  Module_Image
//
//  Created by Virgile Broillet & Ithier Débauché & Marie Graff on 24/01/2023.
//

class Pixel{
    private :

    unsigned char r,g,b; //entier entre (0 & 255) les composantes du pixel, unsigned char en C++

     public :

       // Constructeur par défaut de la classe: initialise le pixel à la couleur noire
    Pixel ();

       // Constructeur de la classe: initialise r,g,b avec les paramètres
    Pixel (unsigned int const nr, unsigned int const ng, unsigned int const nb);

       // Accesseur : récupère la composante rouge du pixel
    unsigned int getRouge () const;

       // Accesseur : récupère la composante verte du pixel
    unsigned int getVert () const;
    
       // Accesseur : récupère la composante bleue du pixel
    unsigned int getBleu () const;

       // Mutateur : modifie la composante rouge du pixel
    void setRouge (unsigned int const nr);

       // Mutateur : modifie la composante verte du pixel
    void setVert (unsigned int const ng);

       // Mutateur : modifie la composante bleue du pixel
    void setBleu (unsigned int const nb);
};
