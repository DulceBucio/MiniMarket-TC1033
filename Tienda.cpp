//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador | Clase tienda, metodos e implementaciones
//

#include "Tienda.h"
#include <iostream>
#include <fstream>
using namespace std;

// Constructor de la clase Cliente:
Tienda::Tienda() {
    identificadorT = "";
    nombreT = "";
    direccionT = "";
    cantidadProductosT = 0;
    cantidadClientesT = 0;
    ingresoDiarioT = 00;
}

// Constructor con parámetros de la clase Tienda:
Tienda::Tienda(string identificadorT, string nombreT, string direccionT, int cantidadProductosT, int cantidadClientesT, double ingresoDiarioT) {
    this -> identificadorT = identificadorT;
    this -> nombreT = nombreT;
    this -> direccionT = direccionT;
    this -> cantidadProductosT = cantidadProductosT;
    this -> cantidadClientesT = cantidadClientesT;
    this -> ingresoDiarioT = ingresoDiarioT;
}

Tienda::~Tienda() {}

// Return para obtener el valor de los diferentes atributos:
string Tienda::getIdentificadorT() {
    return identificadorT;
}
string Tienda::getNombreT() {
    return nombreT;
}
string Tienda::getDireccionT() {
    return direccionT;
}
int Tienda::getCantidadProductosT() {
    return cantidadProductosT;
}
int Tienda::getCantidadClientesT() {
    return cantidadClientesT;
}
double Tienda::getIngresoDiarioT() {
    return ingresoDiarioT;
}

// Métodos para definir el valor de los diferentes atributos:
void Tienda::setIdentificadorT(string identificadorT1) {
        identificadorT = identificadorT1;
}
void Tienda::setNombreT(string nombreT1) {
        nombreT = nombreT1;
}
void Tienda::setDireccionT(string direccionT1) {
        direccionT= direccionT1;
}
void Tienda::setCantidadProductosT(int cantidadProductosT1) {
        cantidadProductosT = cantidadProductosT1;
}
void Tienda::setCantidadClientesT(int cantidadClientesT1) {
        cantidadClientesT = cantidadClientesT1;
}
void Tienda::setIngresoDiarioT(double ingresoDiarioT1) {
        ingresoDiarioT = ingresoDiarioT1;
}

void Tienda::agregarCliente() {
    string nombreN, identificadorN, correoN, telefonoN;
    cout << "Ingrese un usuario: \n";
    cin >> nombreN;
    cout << "Ingrese un identificador: \n ";
    cin >> identificadorN;
    cout << "Ingrese un correo electronico: \n";
    cin >> correoN;
    cout << "Ingrese un numero telefonico: \n";
    cin >> telefonoN;
    int i;
    clientesT[i].setCliente(nombreN, identificadorN, correoN, telefonoN);
}
// Método para imprimir con carteles los diferentes atributos:
void Tienda::imprimirTienda() {
    cout << "Identificador de la tienda: " << identificadorT << endl;
    cout << "Nombre de la tienda: " << nombreT << endl;
    cout << "Direccion de la tienda: " << direccionT << endl;
    cout << "Cantidad de productos en la tienda: " << cantidadProductosT << endl;
    cout << "Cantidad de clientes en la tienda: " << cantidadClientesT << endl;
    cout << "Ingreso diario de la tienda: " << ingresoDiarioT << endl;
}