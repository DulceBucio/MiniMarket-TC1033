//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador
//

#include <iostream>
#include "Producto.h"
#include "Cliente.h"
using namespace std;

// Declaración de la clase Cliente con sus atributos (privado) y sus métodos (público)
const int CANTIDADPROD = 10;
const int CANTCLIENTES = 20;
class Tienda {
    string identificadorT, nombreT, direccionT;
    int cantidadProductosT, cantidadClientesT;
    Producto productosT[CANTIDADPROD];
    Cliente clientesT[CANTCLIENTES];
    double ingresoDiarioT;

public:
    // Constructores
    Tienda();
    Tienda(string, string, string, int, int, Producto, Cliente, double);
    // Destructor
    ~Tienda();
    // Accesores (getters)
    string getIdentificadorT();
    string getNombreT();
    string getDireccionT();
    int getCantidadProductosT();
    int getCantidadClientesT();
    Producto getProductosT();
    Cliente getClientesT();
    double getIngresoDiarioT();
    // Modificadores (setters)
    void setIdentificadorT();
    void setNombreT();
    void setDireccionT();
    void setCantidadProductosT();
    void setCantidadClientesT();
    Producto setProductosT();
    Cliente setClientesT();
    void setIngresoDiarioT();
    // Otros metodos

};