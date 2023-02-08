//
//  PIxel.cpp
//  Module_Image
//
//  Created by Virgile Broillet on 24/01/2023.
//

#include "Pixel.hpp"

Pixel::Pixel()
{
    r=0;g=0;b=0;
}

Pixel::Pixel (unsigned int const nr, unsigned int const ng, unsigned int const nb)
{
    r=nr;g=ng;b=nb;
}

unsigned int Pixel::getRouge () const
{
    return (int)r;
}

unsigned int Pixel::getVert () const
{
    return (int)g;
}
    
unsigned int Pixel::getBleu () const
{
    return (int)b;
}

void Pixel::setRouge (unsigned int const nr)
{
    r=nr;
}

void Pixel::setVert (unsigned int const ng)
{
    g=ng;
}

void Pixel::setBleu (unsigned int const nb)
{
    b=nb;
}
