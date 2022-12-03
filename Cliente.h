//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador | Clase cliente
//
#pragma once
#include <iostream>
#include "Producto.h"
using namespace std;

// Declaración de la clase Cliente con sus atributos (privado) y sus métodos (público)
const int CANT_CARRITO = 10;
class Cliente {
    string identificadorC, nombreC, correoElectronicoC, telefonoC;
    Producto carritoC[CANT_CARRITO];
    double totalC;
    int cantidadProdCarrito;
public:
    // Constructores
    Cliente();
    Cliente(string, string, string, string, double, int);
    // Destructor
    ~Cliente();
    // Accesores (getters)
    string getIdentificadorC();
    string getNombreC();
    string getCorreoElectronicoC();
    string getTelefonoC();
    double getTotalC();
    int getCantidadProdCarrito();
    Producto getCarritoC(int);
    // Modificadores (setters)
    void setIdentificadorC(string);
    void setNombreC(string);
    void setCorreoElectronicoC(string);
    void setTelefonoC(string);
    void setTotalC(double);
    void setCantidadProdCarrito(int);
    void setCliente(string, string, string, string);
    void setCarritoC(string, string, float, int);
    void vaciarCarritoC();
    // Otros metodos
    void imprimirCliente();
};