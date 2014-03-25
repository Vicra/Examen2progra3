#include <iostream>
#include "ArbolTrinario.h"
#include "NodoTrinario.h"

using namespace std;

int main()
{
    ArbolTrinario a;
    a.imprimir(a.raiz);
    cout <<endl;
    a.raiz->imprimir();

    int num;
    cout<<"Ingrese un numero a buscar: ";
    cin>> num;
    if(a.existe(num))
    {
        cout<<"SI existe"<<endl;
    }else
    {
        cout<<"NO existe"<<endl;
    }

    return 0;
}
