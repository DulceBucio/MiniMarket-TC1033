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
    cantidadProdCarrito = 0;
}

// Constructor con parámetros de la clase Cliente:
Cliente::Cliente(string identificadorC, string nombreC, string correoElectronicoC, string telefonoC, double totalC, int cantidadProdCarrito) {
    this -> identificadorC = identificadorC;
    this -> nombreC = nombreC;
    this -> correoElectronicoC = correoElectronicoC;
    this -> telefonoC = telefonoC;
    this -> totalC = totalC;
    this -> cantidadProdCarrito = cantidadProdCarrito;
}

Cliente::~Cliente() {} // Destructor

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
double Cliente::getTotalC() {
    return totalC;
}

int Cliente::getCantidadProdCarrito() {
    return cantidadProdCarrito;
}

Producto Cliente::getCarritoC() {
    for (int i = 0; i < CANT_CARRITO; i++){
        return carritoC[i];
    }
}
void Cliente::setTotalC(double totalC1) {
    totalC = totalC1;
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

void Cliente::setCantidadProdCarrito(int cantPC) {
    cantidadProdCarrito = cantPC;
}
// Este es un setter parecido a un constructor para poder meter clientes a listas
void Cliente::setCliente(string identificadorC, string nombreC, string correoElectronicoC, string telefonoC) {
    this -> identificadorC = identificadorC;
    this -> nombreC = nombreC;
    this -> correoElectronicoC = correoElectronicoC;
    this -> telefonoC = telefonoC;
}

void Cliente::setCarritoC(string claveC, string nombreC, float precioC, int cantidadC) {
    carritoC[cantidadProdCarrito].setProductoCarrito(claveC, nombreC, precioC, cantidadC);
    setCantidadProdCarrito(cantidadC);
}

// Método para imprimir con carteles los diferentes atributos:
void Cliente::imprimirCliente() {
    cout << "Identificador del cliente: " << identificadorC << "\n";
    cout << "Nombre del cliente: " << nombreC << "\n";
    cout << "Correo electronico del cliente: " << correoElectronicoC << "\n";
    cout << "Telefono del cliente: " << telefonoC << "\n";
    cout << "Carrito del cliente: " << carritoC;
}