//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador
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
Producto::Producto(string claveT, string nombreP, int categoriaP, float precioP, int cantidadP) {

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
    return precioP;
}
int Producto::getCantidadP(){
    return cantidadP;
}

void Producto::agregarLosProducto(string nombreArchivo) {
    ifstream miArchivo; // objeto de tipo archivos de entrada
    miArchivo.open(nombreArchivo.c_str(), ios::out | ios::in);
    // el archivo cuyo nombre llega como parametro, se abre para lectura
    if (!miArchivo) // si el archivo no se encuentra, marcara error
        cout<<"\nEl archivo no existe\n";
    else{
        cout<<"\nLleno el arreglo con los datos del archivo de texto\n";
            string nombrePr;
            int categoriaProd, cantidadProd;
            float precioProd;
        int i = 0;
        while (!miArchivo.eof() && i < CANT-1){ // cuido no llegar al fin del archivo
            // y no rebasar el tamanio de mi arreglo
            miArchivo >> nombrePr >> categoriaProd >> precioProd >> cantidadProd; // obtengo los valores del archivo y
            // los paso a mis variables previamente definidas con el tipo requerido
            cout << nombrePr << " " << categoriaProd << " " << precioProd << cantidadProd << endl;
            frutas_verduras[i++].setPersona(nombrePr, cat); // actualizo el iesimo registro de personas
        }
    }
}

