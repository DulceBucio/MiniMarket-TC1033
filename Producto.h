//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador | Clase producto
//

#pragma once //Esta clase la incluiremos muchas veces, por lo que usamos pragma once
#include <iostream>
using namespace std;


// Declaración de la clase Producto con sus atributos (privado) y sus métodos (público)
class Producto {
    string claveT, nombreP;
    int categoriaP, cantidadP;
    float precioP;
    //string frutas_verduras[CANT], electrodomesticos[CANT], abarrotes[CANT], higiene[CANT], jardineria[CANT];
public:
    // Constructores
    Producto();
    Producto(string, string, int, float, int);
    // Destructor
    ~Producto();
    // Accesores (getters)
    string getClaveT();
    string getNombreP();
    int getCategoriaP();
    float getPrecioP();
    int getCantidadP();
    // Modificadores (setters)
    void setProducto(string, string, int, float, int);
    void setClaveT(string);
    void setNombreP(string);
    void setCategoriaP(int);
    void setCantidadP(int);
    void setPrecioP(float);
    void setProductoCarrito(string, string, float, int);
    // Otros metodos
    void imprimirProducto(); //Existen distintos metodos de impresion ya que dan distintos formatos
    void imprimirMenuProductos();
    void imprimirTicketProductos();
};