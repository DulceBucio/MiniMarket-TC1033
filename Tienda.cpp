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

// Método para imprimir con carteles los diferentes atributos:
void Tienda::imprimirTienda() {
    cout << "Identificador de la tienda: " << identificadorT << endl;
    cout << "Nombre de la tienda: " << nombreT << endl;
    cout << "Direccion de la tienda: " << direccionT << endl;
    cout << "Cantidad de productos en la tienda: " << cantidadProductosT << endl;
    cout << "Cantidad de clientes en la tienda: " << cantidadClientesT << endl;
    cout << "Ingreso diario de la tienda: " << ingresoDiarioT << endl;
}

void Tienda::agregarLosProducto(string nombreArchivo) {
    ifstream miArchivo; // objeto de tipo archivos de entrada
    miArchivo.open(nombreArchivo.c_str(), ios::out | ios::in);
    // el archivo cuyo nombre llega como parametro, se abre para lectura
    if (!miArchivo) // si el archivo no se encuentra, marcara error
        cout<<"\nEl archivo no existe\n";
    else{
        string nombre_p;
        int cantidad_p, categoria_p;
        float precio_p;
        while (!miArchivo.eof() && i < CANTIDADPROD){ // cuido no llegar al fin del archivo
            // y no rebasar el tamanio de mi arreglo
            // rfc11 monica 15
            miArchivo >> nombre_p >> categoria_p >> cantidad_p >> precio_p >> endl; // obtengo los valores del archivo y
            // los paso a mis variables previamente definidas con el tipo requerido
            cout << nombre_p << " " << categoria_p << " " << cantidad_p << " " << precio_p << endl;
            productosT[i++].Producto(nombre_p, categoria_p, cantidad_p, precio_p); // actualizo el iesimo registro de personas
        }
    }
}}