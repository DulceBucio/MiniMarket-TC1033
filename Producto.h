//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador
//
#pragma once
#include <iostream>
using namespace std;

const int CANT = 5;
// Declaración de la clase Producto con sus atributos (privado) y sus métodos (público)
class Producto {
    string claveT, nombreP;
    int categoriaP, cantidadP;
    float precioP;
    //string frutas_verduras[CANT], electrodomesticos[CANT], abarrotes[CANT], higiene[CANT], jardineria[CANT];
public:
    // Constructores
    Producto();
    Producto(string, int, float, int);
    // Destructor
    ~Producto();
    // Accesores (getters)
    string getClaveT();
    string getNombreP();
    int getCategoriaP();
    int getCantidadP;
    float getPrecioP;
    // Modificadores (setters)
    void setClaveT(string);
    void setNombreP(string);
    void setCategoriaP(int);
    void setCantidadP(int);
    void setPrecioP(float);
    // Otros metodos
    void imprimirProducto();
};