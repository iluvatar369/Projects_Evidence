#ifndef RESERVACION_H
#define RESERVACION_H
#include<iostream> //para imprimir.
using namespace std;


class Reservacion{//Tercera Clase, para reservar
    private://Atributos, para la hora y el lugar
        string hora;
        string sucursal;
    public://Funciones
        Reservacion();//Constructor
        void setReservar(string, string);//Funci�n SET para los tipo de atributos
        string ConfHora();//Funciones confirmaci�n para hora y sucursal
        string ConfSucursal();
};

Reservacion::Reservacion(){//Constructor
}

void Reservacion::setReservar(string _sucursal,string _hora){//Funcion SET para los tipo de atributos
    hora=_hora;
    sucursal=_sucursal;
}

string Reservacion::ConfSucursal(){ //Funci�n de confirmaci�n para la sucursal y regresar la que se escogi�
    cout<<"\nLa recevarcion es en: "<<sucursal;
    return sucursal;
}

string Reservacion::ConfHora(){ //Funci�n de confirmaci�n para la hora y regresar la que se escogi�
    cout<<" a las: "<<hora<<"\n";
    return sucursal;
}

#endif
