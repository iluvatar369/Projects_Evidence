#ifndef APP_H
#define APP_H
#include<iostream> //para imprimir.
using namespace std;

class App{//Clase para nombre del restaurante
    private://Atributos
       string nombre;
       int numrand;
    public://Funciones
        App(string);//Constructor1
        App(int);//Constructor2
        string getNombre();//Funcion GET del nombre
        void NoReserv();//Funci�n para mostrar el numero de reservaci�n
};

App::App(string _nombre){//Constructor
    nombre=_nombre;
}

App::App(int _numrand){//Constructor2
    numrand=_numrand;
}

string App::getNombre(){//Funcion GETTER para que te regrese el nombre y te de la bienvenida
    cout<<"WILLKOMMEN ZU "<<nombre<<endl;
    return nombre;
}

void App::NoReserv(){//Funci�n para mostrar un numero de reservaci�n
    cout<<"................................\n";
    cout<<":Tu numero de reservacion es "<<numrand<<":"<<endl;
    cout<<"................................\n";
}
#endif
