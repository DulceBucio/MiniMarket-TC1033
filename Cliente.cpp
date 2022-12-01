//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador | Clase cliente, metodos e implementaciones
//

#include "Cliente.h"
#include <iostream>
using namespace std;

// Constructor de la clase Cliente:
Cliente::Cliente(){
    identificadorC = "";
    nombreC = "";
    correoElectronicoC = "";
    telefonoC = "";
    totalC = 00;
}

// Constructor con parámetros de la clase Cliente:
Cliente::Cliente(string identificadorC, string nombreC, string correoElectronicoC, string telefonoC, double totalC) {
    this -> identificadorC = identificadorC;
    this -> nombreC = nombreC;
    this -> correoElectronicoC = correoElectronicoC;
    this -> telefonoC = telefonoC;
    this -> totalC = totalC;
}

Cliente::~Cliente() {}
// Return para obtener el valor de los diferentes atributos:
string Cliente::getIdentificadorC() {
    return identificadorC;
}
string Cliente::getNombreC() {
    return nombreC;
}
string Cliente::getCorreoElectronicoC() {
    return correoElectronicoC;
}
string Cliente::getTelefonoC() {
    return telefonoC;
}

Producto Cliente::getCarritoC(int cant) {
    Producto paraError;
    paraError.setNombreP("Vacio");
    if (cant >=0 && cant < CANT_CARRITO){
        //return carritoC[CANT_CARRITO];
    }
    else {
        return paraError;
    }
}
double Cliente::getTotalC() {
    return totalC;
}

// Métodos para definir el valor de los diferentes atributos:
void Cliente::setIdentificadorC(string identificadorC1) {
    identificadorC = identificadorC1;
}
void Cliente::setNombreC(string nombreC1) {
    nombreC = nombreC1;
}
void Cliente::setCorreoElectronicoC(string correoElectronicoC1) {
    correoElectronicoC= correoElectronicoC1;
}
void Cliente::setTelefonoC(string telefonoC1) {
    telefonoC = telefonoC1;
}
void Cliente::setTotalC(double totalC1) {
    totalC = totalC1;
}

void Cliente::setCliente(string identificadorC, string nombreC, string correoElectronicoC, string telefonoC) {
    this -> identificadorC = identificadorC;
    this -> nombreC = nombreC;
    this -> correoElectronicoC = correoElectronicoC;
    this -> telefonoC = telefonoC;
}

// Método para imprimir con carteles los diferentes atributos:
void Cliente::imprimirCliente() {
    cout << "Identificador del cliente: " << identificadorC << endl;
    cout << "Nombre del cliente: " << nombreC << endl;
    cout << "Correo electronico del cliente: " << correoElectronicoC << endl;
    cout << "Telefono del cliente: " << telefonoC << endl;
}