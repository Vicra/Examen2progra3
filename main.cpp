#include <iostream>
#include "ArbolTrinario.h"
#include "NodoTrinario.h"
#include <vector>
#include "Animal.h"
#include <fstream>

using namespace std;

vector<Animal*> animales;

void agregarAnimal()
{
    string raza, nombre, comida;
    int edad;
    cout<<"Ingrese la raza: ";
    cin>>raza;

    cout<<"Ingrese el nombre: ";
    cin>>nombre;

    cout<<"Ingrese la edad: ";
    cin>>edad;

    cout<<"Ingrese la comida favorita: ";
    cin>>comida;

    animales.push_back(new Animal(raza, nombre, comida, edad));
}
void imprimir()
{
    for(int i =0;i<animales.size();i++)
    {
        cout<<animales[i]->nombre<<endl;
        cout<<animales[i]->edad<<endl;
        cout<<animales[i]->comida<<endl;
        cout<<animales[i]->raza<<endl;
    }
    cout<<endl;
}
void cuidadoEspecial()
{
    for(int i =0;i<animales.size();i++)
    {
        if(animales[i]->edad < 1 || animales[i]->edad>20)
        {
            cout<<animales[i]->nombre<<endl;
            cout<<animales[i]->edad<<endl;
            cout<<animales[i]->comida<<endl;
            cout<<animales[i]->raza<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
}
void guardar()
{
    string archivo;
    cout<<"Ingrese el nombre del archivo: ";
    cin >>archivo;

    ofstream o(archivo.c_str());
    for(int i =0;i<animales.size();i++)
    {
        o.write(animales[i]->nombre.c_str(),20);
        o.write((char*)&animales[i]->edad,4);
        o.write(animales[i]->comida.c_str(),20);
        o.write(animales[i]->raza.c_str(),20);
    }
    o.close();
}
void abrir()
{
    string archivo;
    cout<<"Ingrese el nombre del archivo: ";
    cin >>archivo;

    ifstream i(archivo.c_str());

    i.seekg(0,ios::end);
    int tam = i.tellg();
    i.seekg(0);

    while(i.tellg()<tam)
    {
        char* nombre = new char[20];
        int* edad = new int(0);
        char* comida = new char[20];
        char* raza = new char[20];

        i.read(nombre, 20);
        i.read((char*)edad, 4);
        i.read(comida, 20);
        i.read(raza, 20);

    }
    i.close();
}
int main()
{

    bool quit =false;

    ArbolTrinario a;
    a.imprimir(a.raiz);
    cout <<endl;
    a.raiz->imprimir();

    int num;
    cout<<"Ingrese un numero a buscar: ";
    cin>> num;
    if(a.existe(num,a.raiz))
    {
        cout<<"SI existe"<<endl;
    }else
    {
        cout<<"NO existe"<<endl;
    }


    while(quit == false)
    {
        int opcion;
        cout<<"\n1. Agregar Animal"<<endl;
        cout<<"2. Imprimir"<<endl;
        cout<<"3. Guardar"<<endl;
        cout<<"4. Abrir "<<endl;
        cout<<"5. Cuidado Especial"<<endl;
        cout<<"6. Salir:  ";
        cin>>opcion;

        switch(opcion)
        {
        case 1:agregarAnimal();
            break;
        case 2:imprimir();
            break;
        case 3:guardar();
            break;
        case 4:abrir();
            break;
        case 5: cuidadoEspecial();
            break;
        case 6: quit = true;
        break;
        }
    }
    return 0;
}
