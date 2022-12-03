
//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador | Clase tienda, metodos e implementaciones
//

#include "Tienda.h"
#include <iostream>
#include <fstream>
using namespace std;

// Constructor de la clase Cliente:
Tienda::Tienda() {
    identificadorT = "";
    nombreT = "";
    direccionT = "";
    cantidadProductosT = 0;
    cantidadClientesT = 0;
    ingresoDiarioT = 00;
}

// Constructor con parámetros de la clase Tienda:
Tienda::Tienda(string identificadorT, string nombreT, string direccionT, int cantidadProductosT, int cantidadClientesT, double ingresoDiarioT) {
    this -> identificadorT = identificadorT;
    this -> nombreT = nombreT;
    this -> direccionT = direccionT;
    this -> cantidadProductosT = cantidadProductosT;
    this -> cantidadClientesT = cantidadClientesT;
    this -> ingresoDiarioT = ingresoDiarioT;
}

Tienda::~Tienda() {} // Destructor

// Return para obtener el valor de los diferentes atributos:
string Tienda::getIdentificadorT() {
    return identificadorT;
}
string Tienda::getNombreT() {
    return nombreT;
}
string Tienda::getDireccionT() {
    return direccionT;
}
int Tienda::getCantidadProductosT() {
    return cantidadProductosT;
}
int Tienda::getCantidadClientesT() {
    return cantidadClientesT;
}
double Tienda::getIngresoDiarioT() {
    return ingresoDiarioT;
}
int Tienda::getNumeroDeCliente() {
    return numeroDeCliente;
}
// Métodos para definir el valor de los diferentes atributos:
void Tienda::setIdentificadorT(string identificadorT1) {
        identificadorT = identificadorT1;
}
void Tienda::setNombreT(string nombreT1) {
        nombreT = nombreT1;
}
void Tienda::setDireccionT(string direccionT1) {
        direccionT= direccionT1;
}
void Tienda::setCantidadProductosT(int cantidadProductosT1) {
        cantidadProductosT = cantidadProductosT1;
}
void Tienda::setCantidadClientesT(int cantidadClientesT1) {
        cantidadClientesT = cantidadClientesT1;
}
void Tienda::setIngresoDiarioT(double ingresoDiarioT1) {
        ingresoDiarioT = ingresoDiarioT1;
}
void Tienda::setNumeroDeCliente(int numeroDC) {
    numeroDeCliente = numeroDC;
}
// Método para agregar clientes usando el setClientes
void Tienda::agregarCliente() {
    string nombreN, identificadorN, correoN, telefonoN;
    cout << "Ingrese su nombre: \n";
    cin >> nombreN;
    cout << "Ingrese un identificador: \n";
    cin >> identificadorN;
    cout << "Ingrese un correo electronico: \n";
    cin >> correoN;
    cout << "Ingrese un numero telefonico: \n";
    cin >> telefonoN;
    int i;
    i = getCantidadClientesT();
    clientesT[i].setCliente(identificadorN, nombreN, correoN, telefonoN);
    setCantidadClientesT(i+1);
    setNumeroDeCliente(getCantidadClientesT());
    cout << "Ahora usted es parte de nuestro catalogo! \n";
}


//Método para agregar los productos desde un archivo seleccionado
void Tienda::agregarLosProducto(string nombreArchivo) {
    ifstream miArchivo;
    miArchivo.open(nombreArchivo.c_str(), ios::out | ios::in);
    // el archivo cuyo nombre llega como parametro, se abre para lectura
    if (!miArchivo) {
        cout<<"\nEl archivo no existe\n";
    }// si el archivo no se encuentra, marcara error

    else{
        cout<<"Se cargaron los productos correctamente \n";
        string clave, nombre;
        int categoria, cantidad, i = 0;
        float precio;
        while (!miArchivo.eof() && i <CANTIDADPROD){ // cuido no llegar al fin del archivo
            // y no rebasar el tamanio de mi arreglo
            miArchivo >> clave >> nombre >> categoria >> precio >> cantidad; // obtengo los valores del archivo y
            // los paso a mis variables previamente definidas con el tipo requerido
            productosT[i++].setProducto(clave, nombre, categoria, precio, cantidad);
            setCantidadProductosT(i);
        }
    }
}

// Método para agregar productos manualmente a la respectiva lista
void Tienda::agregarElProducto() {
    string claveN_P, nombreN_P;
    int categoriaN_P, cantidadN_P, i = 0, masproductos = 1;
    bool existeClave = false;
    float precioN_P;
    while (i<CANTIDADPROD){
        cout << "Ingrese la clave del producto: \n";
        cin >> claveN_P;
        cout << "Ingrese el nombre del producto: \n";
        cin >> nombreN_P;
        cout << "Ingrese la categoria del producto: \n";
        cin >> categoriaN_P;
        cout << "Ingrese el precio de producto: \n";
        cin >> precioN_P;
        cout << "Ingrese la cantidad del producto: \n";
        cin >> cantidadN_P;
        productosT[i].setProducto(claveN_P, nombreN_P, categoriaN_P, precioN_P, cantidadN_P);
        cout << "Desea agregar otro producto? 1 para si, 2 para no \n";
        cin >> masproductos;
        if (masproductos == 1)
            i =+1;
        else
            i = CANTIDADPROD;
    }
}

void  Tienda::imprimirTicketCompra() {
    cout << "Clave" << " " << "Nombre" << " " << "Precio" << " " << "Cantidad \n";
    for (int i = 0; i < CANT_CARRITO; i++) {
        Producto prod_carrito = clientesT[numeroDeCliente].getCarritoC(i);
        prod_carrito.imprimirTicketProductos();
    }
    cout << "Total de compra: " << clientesT[numeroDeCliente].getTotalC() << "\n";
    clientesT[numeroDeCliente].vaciarCarritoC();
    clientesT[numeroDeCliente].setTotalC(00);
}

void Tienda::desplegarMenuCompra(int eleccion_categoria) {
    string eleccionCompra;
    int categoria_compra, cuantosCompra;
    bool existeProducto = false;
    cout << "Nombre " << "Precio " << "Cantidad \n";
    for (int prod_cat = 0; prod_cat < cantidadProductosT; prod_cat++){
        if(productosT[prod_cat].getCategoriaP() == eleccion_categoria){
            productosT[prod_cat].imprimirMenuProductos();
        }
    }
    cin >> eleccionCompra;
    for (int prod_nombre = 0; prod_nombre < cantidadProductosT; prod_nombre++){
        if(productosT[prod_nombre].getNombreP() == eleccionCompra){
            cout << "Cuantos deseas comprar? \n";
            cin >> cuantosCompra;
            existeProducto = true;
            if (productosT[prod_nombre].getCantidadP() >= cuantosCompra){
                productosT[prod_nombre].setCantidadP(productosT[prod_nombre].getCantidadP()-cuantosCompra);
                setIngresoDiarioT(productosT[prod_nombre].getPrecioP()*cuantosCompra + getIngresoDiarioT());
                string identificador_compra = productosT[prod_nombre].getClaveT();
                float precio_compra = productosT[prod_nombre].getPrecioP();
                clientesT[numeroDeCliente].setCarritoC(identificador_compra, eleccionCompra, precio_compra, cuantosCompra);
                clientesT[numeroDeCliente].setTotalC(productosT[prod_nombre].getPrecioP()*cuantosCompra + clientesT[getCantidadClientesT()].getTotalC());
            }
            else {
                cout << "No tenemos inventario suficiente \n";
            }
        }
    }
    if (!existeProducto){
        cout << "No tenemos ese producto, intenta de nuevo \n";
    }
}
// Método para comprar
void Tienda::llenarCarrito() {
    string usuario_compra, categoria_compra;
    bool existe_usuario = false;
    cout << "Ingrese su usuario de cliente: \n";
    cin >> usuario_compra;
    for (int verif_usuario = 0; verif_usuario < getCantidadClientesT(); verif_usuario++) { //Ciclo para verificar si ya existe el usuario en la lista
        if (clientesT[verif_usuario].getIdentificadorC() == usuario_compra) {
            existe_usuario = true;
        }
    }
    if (existe_usuario){
        do {
            cout << "Que desea comprar? \n";
            cout << "1) Frutas y verduras \n";
            cout << "2) Electrodomesticos \n";
            cout << "3) Abarrotes \n";
            cout << "4) Higiene personal \n";
            cout << "5) Jardineria \n";
            cout << "6) Imprimir ticket \n";
            cin >> categoria_compra;
            if (categoria_compra == "1") {
                desplegarMenuCompra(1);
            }
            else if(categoria_compra == "2"){
                desplegarMenuCompra(2);
            }
            else if(categoria_compra == "3"){
                desplegarMenuCompra(3);
            }
            else if(categoria_compra == "4"){
                desplegarMenuCompra(4);
            }
            else if(categoria_compra == "5"){
                desplegarMenuCompra(5);
            }
            else if (categoria_compra == "6") {
                imprimirTicketCompra();
            }
            else {
                cout << "Categoria invalida! \n";
            }
        } while (categoria_compra != "6");
    }
    else {
        cout << "La venta de productos es solo para usuarios registrados \n";
        cout << "Te invitamos a ser parte de nuestra tienda registrandote \n";
    }
}

// Método para
void Tienda::cerrarOperaciones() {
    cout << "Total generado del dia: \n";
    cout << getIngresoDiarioT() << "\n";
}
// Método para imprimir con carteles los diferentes atributos:
void Tienda::imprimirTienda() {
    cout << "Identificador de la tienda: " << identificadorT << "\n";
    cout << "Nombre de la tienda: " << nombreT << "\n'";
    cout << "Direccion de la tienda: " << direccionT << "\n";
    cout << "Cantidad de productos en la tienda: " << cantidadProductosT << "\n";
    cout << "Cantidad de clientes en la tienda: " << cantidadClientesT << "\n";
    cout << "Ingreso diario de la tienda: " << ingresoDiarioT << "\n";
}