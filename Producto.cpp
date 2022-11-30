//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador | Clase producto, metodos e implementaciones
//

#include <iostream>
#include <fstream>
#include "Producto.h"
#include <bits/stdc++.h>
#include <ostream>
using namespace std;

Producto::Producto() {
    claveT = "";
    nombreP = "";
    categoriaP = 0;
    precioP = 0;
    cantidadP = 0;
}
Producto::Producto(string nombreP, int categoriaP, float precioP, int cantidadP) {
    this -> nombreP = nombreP;
    this -> categoriaP = categoriaP;
    this -> precioP = precioP;
    this -> cantidadP = cantidadP;
}
Producto::~Producto() {}
string Producto::getClaveT() {
    return claveT;
}
string Producto::getNombreP() {
    return nombreP;
}
int Producto::getCategoriaP() {
    return categoriaP;
}
int Producto::getPrecioP(){
    return precioP
}
int Producto::getCantidadP(){
    return cantidadP;
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

// Método para imprimir con carteles los diferentes atributos:
void Producto::imprimirProducto() {
    cout << "Clave de la tienda: " << claveT << endl;
    cout << "Nombre del producto: " << nombreP << endl;
    cout << "Categoria del producto: " << categoriaP << endl;
    cout << "Precio de producto: " << precioP << endl;
    cout << "Cantidad de productos: " << cantidadP<< endl;
}
