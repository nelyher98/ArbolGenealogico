#include <iostream>
#ifndef ARBIN_H
#define ARBIN_H
#include "nodo.h"
#include "nodo.cpp"
#include <string.h>

using namespace std;

class Arbin
{
    private:
        Nodo *raiz;
        Nodo *Insertar(Nodo*,Nodo*);
        int  getInfo_der(Nodo*);
        void preOrden(Nodo*);
        void inOrden(Nodo*);
        void postOrden(Nodo*);
    public:
        Arbin();
        void Crear(int,string);
        void Recorridos(int);
        bool Vacia();
        
        ~Arbin();
};

#endif //ARBIN_H
