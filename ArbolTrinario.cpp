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
bool ArbolTrinario::existe(int num,NodoTrinario*nodo)
{
    if(this->raiz == NULL)
        return false;

    if(nodo->num == num)
        return true;
    if(nodo->hijo_IZQ!=NULL)
    {
        if(existe(num,nodo->hijo_IZQ))
         return true;
    }
    if(nodo->hijo_DER!=NULL)
    {
        if(existe(num,nodo->hijo_DER))
        return true;
    }
    if(nodo->hijo_medio!=NULL)
    {
        if(existe(num,nodo->hijo_medio))
        return true;
    }
    return false;
}
