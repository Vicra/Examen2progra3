#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
    public:
        string raza,nombre,comida;
        int edad;
        Animal(string raza, string nombre, string comida, int edad);
        virtual ~Animal();
    protected:
    private:
};

#endif // ANIMAL_H
