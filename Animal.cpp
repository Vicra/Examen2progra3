#include "Animal.h"

Animal::Animal(string raza, string nombre, string comida, int edad)
{
    this->raza=raza;
    this->nombre=nombre;
    this->comida=comida;
    this->edad=edad;
}

Animal::~Animal()
{
    //dtor
}
