#include <iostream>
#include "figura.h"
#include "rectangulo.h"

Rectangulo::Rectangulo(int b) : Figura(b, 0)
{
    this->setPerimetro(b * 2 + h * 2);
}
