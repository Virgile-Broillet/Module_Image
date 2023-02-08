//
//  Image.cpp
//  Module_Image
//
//  Created by Virgile Broillet on 24/01/2023.
//

#include "Image.hpp"


Image::Image()
{
    dimx=0;
    dimy=0;
}
 

Image::Image (unsigned int const dimensionX, unsigned int const dimensionY)
{
    dimx=dimensionX;
    dimy=dimensionY;
    
}


Image::~Image()
{
    
}

Pixel Image::getPix (unsigned int const x, unsigned int const y) const
{
    
}


 void Image::setPix (unsigned int const x, unsigned int const y, Pixel& couleur)
{
     
}


 void Image::dessinerRectangle(unsigned int const Xmin, unsigned int const Ymin, unsigned int const Xmax, unsigned int const Ymax, Pixel& couleur)
{
     
}

void Image::effacer (Pixel const couleur)
{
    
}
 

void Image::testRegression () const
{
    
}
