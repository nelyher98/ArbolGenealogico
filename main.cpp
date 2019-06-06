#include "arbin.cpp"
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

main(){


    int info = 0;
    int opcion;
    bool salir = false;
    Arbin *hoja = new Arbin;
    
        hoja->Crear();
        
        do{
        
        cout<<"*******ARBOL GENEALOGICO*******"<<endl;
        cout<<"Recorridos:"<<endl;
        cout <<"1.PREORDER"<<endl;
        cout <<"\n2.INORDER"<<endl;
        cout <<"\n3.POSTORDER"<<endl;
        cout<<"\n4.SALIR"<<endl;
        cout<<"\n>>";cin>>opcion;
		hoja->Recorridos(opcion);
		getch();
		system("cls");
        }while(opcion!=4);


    return 0;
}
