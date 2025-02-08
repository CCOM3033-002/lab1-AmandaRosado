/*
Asignación: Lab01
Amanda Rosado Rosado
Núm. Est: 801-23-8238
Colaboraciones: 
*/

#include <iostream>  // Librería para entrada y salida de datos
#include <iomanip>   // Librería para formateo de salida
using namespace std;

int main ()
{

    // Dice el propósito del programa
    cout << "Este programa calcula el beneficio bruto y neto de taquilla, así como el beneficio del distribuidor de una película que se está proyectando en el cine." << "\n" << endl;

    // Declaración de variables
    string movie;               // Nombre de la película
    double ticket_adulto;       // Cantidad de tickets de adultos vendidos
    double ticket_menor;        // Cantidad de tickets de menores vendidos

    // Solicita el nombre de la película
    cout << "Entre el nombre de su pelicula: " << endl;
    getline(cin, movie);        // Lee el nombre completo de la película
    cout << "\n";

    // Solicita la cantidad de tickets de adultos vendidos
    cout << "Entre la cantidad de tickets de adultos vendidos: " << endl;
    cin >> ticket_adulto;       // Lee la cantidad de tickets de adultos
    cout << "\n";

    // Solicita la cantidad de tickets de menores vendidos
    cout << "Entre la cantidad de tickets de menores vendidos: " << endl;
    cin >> ticket_menor;        // Lee la cantidad de tickets de menores
    cout << "\n\n\n";

    // Cálculos de los ingresos totales de adultos y menores
    double adulto_total = ticket_adulto * 10.0;  // Total de ingresos por tickets de adultos ($10 cada uno)
    double menor_total = ticket_menor * 6.0;    // Total de ingresos por tickets de menores ($6 cada uno)

    // Cálculo del beneficio bruto de taquilla (Gross Box Office Profit)
    double gross_bop = adulto_total + menor_total;  // Suma de los ingresos de adultos y menores

    // Cálculo del porcentaje de ganancia para el cine (20% del total de la taquilla)
    double net_porcentaje = gross_bop * 0.20;       // El cine recibe el 20% de la taquilla

    // Cálculo de la ganancia neta para el distribuidor
    double net_bop = gross_bop - net_porcentaje;    // El distribuidor recibe el resto (80% de la taquilla)

    // Imprime los resultados con un formato bien alineado
    cout << left << setw(35) << "Nombre de pelicula: " << right << setw(6) << "\"" << movie << "\"" << endl;

    cout << left << setw(39) << "Tickets de adultos vendidos: " << right << setw(6) << ticket_adulto << endl;
    cout << left << setw(39) << "Tickets de menores vendidos: " << right << setw(6) << ticket_menor << endl;

    // Establece el formato para mostrar los resultados con 2 decimales
    cout << fixed << setprecision(2);

    // Imprime el beneficio bruto de taquilla
    cout << left << setw(40) << "Beneficio bruto de taquilla: " << right << "$" << setw(8) << gross_bop << endl;

    // Imprime la cantidad que ganó el cine (20% de la taquilla)
    cout << left << setw(39) << "Cantidad que gano el cine en ventas: " << right << " $" << setw(8) << net_porcentaje << endl;

    // Imprime la cantidad que generó el distribuidor (80% de la taquilla)
    cout << left << setw(30) << "Cantidad generada para el distribuidor: " << right << "$" << setw(8) << net_bop << endl;

    // Fin del programa
    return 0;
}

