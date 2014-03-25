#ifndef NODOTRINARIO_H
#define NODOTRINARIO_H


class NodoTrinario
{
    public:
        NodoTrinario* hijo_IZQ;
        NodoTrinario* hijo_DER;
        NodoTrinario* hijo_medio;
        int num;
        NodoTrinario(int num);
        virtual ~NodoTrinario();
        void imprimir();
        bool existe(int num);
    protected:
    private:
};

#endif // NODOTRINARIO_H
