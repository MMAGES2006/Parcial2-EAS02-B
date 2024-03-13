#include <iostream>
#include "figura.h"
#include "cuadrado.h"

Cuadrado::Cuadrado(int b) : Figura(b, 0)
{
}
float Figura::getPerimetro()
{
    p = b * b;
}
