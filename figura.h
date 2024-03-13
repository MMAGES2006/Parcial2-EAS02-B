#ifndef figura_h
#define figura_h

class Figura
{
private:
    int b, h;
    float p;

public:
    Figura();
    Figura(int b, int h);
    void setPerimetro(float a);
    float getPerimetro();
};

Figura::Figura()
{
}

Figura::Figura(int b, int h)
{
    this->b = b;
    this->h = h;
}

void Figura::setPerimetro(float a)
{

    p = a;
}

float Figura::getPerimetro()
{
}

/*pi* diametro */

#endif