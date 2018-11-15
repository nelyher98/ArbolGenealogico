#include <iostream>
#include "arbin.h"

using namespace std;

Arbin::Arbin(){
    raiz = NULL;
}

bool Arbin::Vacia()
{
	if(raiz==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Arbin::Crear(int info,string nombre)
{
	Nodo* aux = new Nodo(info,nombre);
    raiz = Insertar(raiz,aux);
}

Nodo* Arbin::Insertar(Nodo *p, Nodo *q){
    if(p == NULL){
        p = q;
    }
    else{
        if(q->info < p->info){
            p->Llink = Insertar(p->Llink,q);
        }
        else{
            p->Rlink = Insertar(p->Rlink,q);
        }
    }
    
    return p;
}

/*int Arbin::getInfo_der(Nodo *q){
    if(q->Rlink == NULL){
        return q->info;
    }
    else{
        return getInfo_der(q->Rlink);
    }
}*/

void Arbin::preOrden(Nodo *r){
    if(r != NULL){
        cout << " "<< r->info <<""<<r->nombre<<endl;
        preOrden(r->Llink);
        preOrden(r->Rlink);
    }
}

void Arbin::inOrden(Nodo *r){
    if(r != NULL){        
        inOrden(r->Llink);
        cout << " "<< r->info <<""<<r->nombre<<endl;
        inOrden(r->Rlink);
    }
}

void Arbin::postOrden(Nodo *r){
    if(r != NULL){
        postOrden(r->Llink);
        postOrden(r->Rlink);
        cout << " "<< r->info <<""<<r->nombre<<endl;
    }
}

void Arbin::Recorridos(int tipo){
	
    switch(tipo){
        case 1:
            preOrden(raiz);
        break;
        
        case 2:
            inOrden(raiz);
        break;
        
        case 3:
            postOrden(raiz);
        break;
    }
}


Arbin::~Arbin(){}
