#ifndef ARBOLTRINARIO_H
#define ARBOLTRINARIO_H
#include "NodoTrinario.h"
#include <iostream>

using namespace std;

class ArbolTrinario
{
    public:
        NodoTrinario* raiz;
        ArbolTrinario();
        virtual ~ArbolTrinario();
        void imprimir(NodoTrinario*raiz);
        bool existe(int num,NodoTrinario*nodo);
    protected:
    private:
};

#endif // ARBOLTRINARIO_H
