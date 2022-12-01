//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador | Aplicacion main
//

#include <iostream>
#include "Producto.h" //Incluimos las clases necesarias que creamos
#include "Cliente.h"
#include "Tienda.h"
using namespace std;

int main() {
    Tienda tiendita;
    string identificadorT_usuario, nombreT_usuario, direccionT_usuario;
    cout << "Introduzca un identificador para su tienda: \n";
    cin >> identificadorT_usuario;
    cout << "Elija un nombre para su tienda: \n";
    cin >> nombreT_usuario;
    cout << "Direccion de su tienda: \n";
    cin >> direccionT_usuario;
    tiendita.setIdentificadorT(identificadorT_usuario);
    tiendita.setNombreT(nombreT_usuario);
    tiendita.setDireccionT(direccionT_usuario);
    int menu = 0;
    do {
        cout << "Bienvenido a tiendita " << tiendita.getNombreT() << "\n";
        cout << "Elija una opcion: \n";
        cout << "1) Agregar productos desde archivo \n";
        cout << "2) Agregar productos uno a uno \n";
        cout << "3) Agregar clientes \n";
        cout << "4) Comprar productos \n";
        cout << "5) Realizar cierre del dia \n";
        cout << "6) Salir \n";
        cin >> menu;
        if (menu == 1){
            string archivo_usuario;
            cout << "Elija un archivo de donde importar los productos \n";
            cin >> archivo_usuario;
            tiendita.agregarLosProducto(archivo_usuario);
        }
        if (menu == 2) {
            tiendita.agregarElProducto();
        }
        if (menu == 3){
            tiendita.agregarCliente();
            int decision_3 = 0;
            cout << "Desea realizar otra operacion? 1) para si, 2) para no \n";
            cin >> decision_3;
            if (decision_3 == 1)
                menu = 0;
            else
                menu = 6;
        }
        if (menu == 4) {
            tiendita.llenarCarrito();
        }
        if (menu == 5) {
            cout << "aqui no hay nada todavia jejejej \n";
        }
    } while (menu != 6);


    return 0;
}
