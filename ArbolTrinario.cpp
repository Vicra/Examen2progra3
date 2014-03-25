#include "ArbolTrinario.h"

ArbolTrinario::ArbolTrinario()
{
    raiz = new NodoTrinario(5);
    raiz->hijo_IZQ =  new NodoTrinario(6);
    raiz->hijo_DER =  new NodoTrinario(8);
    raiz->hijo_medio =  new NodoTrinario(34);
}

ArbolTrinario::~ArbolTrinario()
{
    //dtor
}
void ArbolTrinario::imprimir(NodoTrinario*raiz)
{
    if(raiz == NULL)
    {
        return;
    }
    cout<<raiz->num<<endl;
    imprimir(raiz->hijo_IZQ);
    imprimir(raiz->hijo_DER);
    imprimir(raiz->hijo_medio);

}
bool ArbolTrinario::existe(int num)
{
    if(this->raiz->num == num)
        return true;

    if(this->raiz->hijo_IZQ!=NULL)
    this->raiz->hijo_IZQ->existe(this->raiz->hijo_IZQ->num);

    if(this->raiz->hijo_DER!=NULL)
    this->raiz->hijo_DER->existe(this->raiz->hijo_DER->num);

    if(this->raiz->hijo_medio!=NULL)
    this->raiz->hijo_medio->existe(this->raiz->hijo_medio->num);

    return false;
}
