//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador | Clase producto, metodos e implementaciones
//

#include <iostream>
#include <fstream>
#include "Producto.h"
using namespace std;

// Constructores
Producto::Producto() {
    claveT = "";
    nombreP = "";
    categoriaP = 0;
    precioP = 0.00;
    cantidadP = 0;
}

// Constructor con parámetros de la clase Producto:
Producto::Producto(string claveT, string nombreP, int categoriaP, float precioP, int cantidadP) {
    this -> claveT = claveT;
    this -> nombreP = nombreP;
    this -> categoriaP = categoriaP;
    this -> precioP = precioP;
    this -> cantidadP = cantidadP;
}
Producto::~Producto() {} //Destructor

//Getters
string Producto::getClaveT() {
    return claveT;
}
string Producto::getNombreP() {
    return nombreP;
}
int Producto::getCategoriaP() {
    return categoriaP;
}
float Producto::getPrecioP(){
    return precioP;
}
int Producto::getCantidadP(){
    return cantidadP;
}

//Setters
//El primero es una especie de setter parecido a un constructor para
// meter productos a listas.
void Producto::setProducto(string claveT, string nombreP, int categoriaP, float precioP, int cantidadP) {
    this -> claveT = claveT;
    this -> nombreP = nombreP;
    this -> categoriaP = categoriaP;
    this -> precioP = precioP;
    this -> cantidadP = cantidadP;
}

void Producto::setClaveT(string claveT1) {
    claveT = claveT1;
}
void Producto::setNombreP(string nombreP1) {
    nombreP = nombreP1;
}
void Producto::setCategoriaP(int categoriaP1) {
    categoriaP = categoriaP1;
}
void Producto::setPrecioP(float precioP1) {
    precioP = precioP1;
}
void Producto::setCantidadP(int cantidadP1) {
    cantidadP = cantidadP1;
}

void Producto::setProductoCarrito(string claveT, string nombreP, float precioP, int cantidadP){
    this -> claveT = claveT;
    this -> nombreP = nombreP;
    this -> precioP = precioP;
    this -> cantidadP = cantidadP;
}

// Método para imprimir con carteles los diferentes atributos:
void Producto::imprimirProducto() {
    cout << "Clave del producto: " << claveT << "\n";
    cout << "Nombre del producto: " << nombreP << "\n";
    cout << "Categoria del producto: " << categoriaP << "\n";
    cout << "Precio de producto: " << precioP << "\n";
    cout << "Cantidad de productos: " << cantidadP<< "\n";
}

// Método para imprimir un menú de selección del producto a comprar
void Producto::imprimirMenuProductos() {
    cout << nombreP << " " << precioP << "   " << cantidadP << "\n";
}

void Producto::imprimirTicketProductos() {
    cout << claveT << " " << nombreP << " " << precioP << " " << cantidadP << "\n";
}