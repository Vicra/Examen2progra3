#include "NodoTrinario.h"
#include <iostream>

using namespace std;

NodoTrinario::NodoTrinario(int num)
{
    this->num=num;
    this->hijo_IZQ=NULL;
    this->hijo_DER=NULL;
    this->hijo_medio=NULL;
}

NodoTrinario::~NodoTrinario()
{
    //dtor
}
void NodoTrinario::imprimir()
{
    cout<<this->num<<endl;
    if(this->hijo_IZQ!=NULL)
        this->hijo_IZQ->imprimir();

    if(this->hijo_DER!=NULL)
        this->hijo_DER->imprimir();

    if(this->hijo_medio!=NULL)
        this->hijo_medio->imprimir();
}
bool NodoTrinario::existe(int num)
{
    if(this->num==num)
        return true;
    return false;
}
