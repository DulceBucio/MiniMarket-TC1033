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
    // Creamos un objeto tienda, es el que modificara el usuario
    Tienda tiendita;
    // Declaramos los atributos que personalizara el usuario y los asignamos
    string identificadorT_usuario, nombreT_usuario, direccionT_usuario;
    cout << "Introduzca un identificador para su tienda: \n";
    cin >> identificadorT_usuario;
    cout << "Elija un nombre para su tienda: \n";
    cin >> nombreT_usuario;
    cout << "Direccion de su tienda: \n";
    cin >> direccionT_usuario;
    string archivo_usuario;
    cout << "Elija un archivo de donde importar los productos \n";
    cin >> archivo_usuario;
    // Usamos los metodos necesarios para agregar los datos seleccionados por el usuario
    tiendita.agregarLosProducto(archivo_usuario);
    tiendita.setIdentificadorT(identificadorT_usuario);
    tiendita.setNombreT(nombreT_usuario);
    tiendita.setDireccionT(direccionT_usuario);
    string menu; //Esta variable controla el menu que se muestra
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
        if (menu == "1"){
            cout << "No tienes permiso para realizar esta operacion \n";
        }
        else if(menu == "2") {
            tiendita.agregarElProducto();
        }
        else if(menu == "3"){
            tiendita.agregarCliente();
        }
        else if(menu == "4") {
            tiendita.llenarCarrito();
        }
        else if(menu == "5") {
            tiendita.cerrarOperaciones();
        }
        else if(menu == "6"){
            cout << "Vuelva pronto! \n";
        }
        else {
            cout << "Opcion invalida \n";
        }
    } while (menu != "6");


    return 0;
}
