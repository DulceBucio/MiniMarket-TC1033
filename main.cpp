//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador | Apliacacion main
//

#include <iostream>
#include "Producto.h" //Incluimos las clases necesarias que creamos
#include "Cliente.h"
#include "Tienda.h"
using namespace std;

int main() {
    Tienda tienda1;
    tienda1.setIdentificadorT("T1");
    tienda1.setNombreT("Tienda 1");
    tienda1.setDireccionT("Calle 1");
    tienda1.setCantidadProductosT(10);
    tienda1.setCantidadClientesT(5);
    tienda1.setIngresoDiarioT(1000);
    cout << "Identificador: " << tienda1.getIdentificadorT() << endl;
    cout << "Nombre: " << tienda1.getNombreT() << endl;
    cout << "Direccion: " << tienda1.getDireccionT() << endl;
    cout << "Cantidad de productos: " << tienda1.getCantidadProductosT() << endl;
    cout << "Cantidad de clientes: " << tienda1.getCantidadClientesT() << endl;
    cout << "Ingreso diario: " << tienda1.getIngresoDiarioT() << endl;
    return 0;
}
