//
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 23/11/2022
// Proyecto Integrador
//

#include <iostream>
using namespace std;

// Declaración de la clase Cliente con sus atributos (privado) y sus métodos (público)
class Cliente {
    string identificadorC, nombreC, correoElectronicoC, telefonoC;
    double totalC;
    Producto carritoC;
public:
    // Constructores
    Cliente();
    Cliente(string, string, string, string, double, Producto);
    // Destructor
    ~Cliente();
    // Accesores (getters)
    string getIdentificadorC();
    string getNombreC();
    string getCorreoElectronicoC();
    string getTelefonoC();
    double getTotalC();
    Producto getCarritoC();
    // Modificadores (setters)
    void setIdentificadorC(string);
    void setNombreC(string);
    void setCorreoElectronicoC(string);
    void setTelefonoC(string);
    void setTotalC(double);
    Producto setCarritoC();
    // Otros metodos
    void imprimirCliente();
    void agregarClientes();
};