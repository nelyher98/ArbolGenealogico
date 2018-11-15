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
    
        hoja->Crear(7,"Nely");
        hoja->Crear(3,"Nely");
        hoja->Crear(1,"Margarita");
        hoja->Crear(6,"Reynaldo");
        
        hoja->Crear(4,"Visabuela");
		hoja->Crear(5,"Tatarabuela");
        
        hoja->Crear(12,"Ismaael");
        hoja->Crear(9,"Reyna");
        hoja->Crear(13,"Ismael");
        
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
