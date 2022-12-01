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

Tienda::~Tienda() {}

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
// Metodo para agregar clientes usando el setClientes
void Tienda::agregarCliente() {
    string nombreN, identificadorN, correoN, telefonoN;
    cout << "Ingrese su nombre: \n";
    cin >> nombreN;
    cout << "Ingrese un identificador: \n ";
    cin >> identificadorN;
    cout << "Ingrese un correo electronico: \n";
    cin >> correoN;
    cout << "Ingrese un numero telefonico: \n";
    cin >> telefonoN;
    int i;
    i = sizeof(clientesT[CANTCLIENTES]);
    clientesT[i].setCliente(nombreN, identificadorN, correoN, telefonoN);
}

//Metodo para agregar los productos desde un archivo seleccionado
void Tienda::agregarLosProducto(string nombreArchivo) {
    ifstream miArchivo;
    miArchivo.open(nombreArchivo.c_str(), ios::out | ios::in);
    // el archivo cuyo nombre llega como parametro, se abre para lectura
    if (!miArchivo) // si el archivo no se encuentra, marcara error
        cout<<"\nEl archivo no existe\n";
    else{
        cout<<"\nLleno el arreglo con los datos del archivo de texto\n";
        string clave, nombre;
        int categoria, cantidad, i = 0;
        float precio;
        while (!miArchivo.eof() && i <CANTIDADPROD){ // cuido no llegar al fin del archivo
            // y no rebasar el tamanio de mi arreglo
            miArchivo >> clave >> nombre >> categoria >> precio >> cantidad; // obtengo los valores del archivo y
            // los paso a mis variables previamente definidas con el tipo requerido
            cout << nombre << " " << categoria << " " << precio << " " << cantidad << endl;
            productosT[i++].setProducto(clave, nombre, categoria, precio, cantidad);
        }
    }
}

// Metodo para agregar productos manualmente a la respectiva lista
void Tienda::agregarElProducto() {
    string claveN_P, nombreN_P;
    int categoriaN_P, cantidadN_P, i = 0, masproductos = 1;
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
        setCantidadProductosT(i);
        cout << "¿Desea agregar otro producto? 1 para si, 2 para no \n";
        cin >> masproductos;
        if (masproductos == 1)
            i =+1;
        else
            i = CANTIDADPROD;
    }
}

// Metodo para comprar
void Tienda::llenarCarrito() {
    string usuario_compra;
    bool existe_usuario = false;
    cout << "Ingrese su usuario de cliente: \n";
    cin >> usuario_compra;
    for (int verif_usuario = 0; verif_usuario < CANTCLIENTES; verif_usuario++) {
        if (clientesT[verif_usuario].getIdentificadorC() == usuario_compra){
            existe_usuario = true;
        }
        else {
            cout << "Eres nuevo aqui \n";
            agregarCliente();
        }
    }
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