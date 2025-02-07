/*
Asignación: Lab01
Amanda Rosado Rosado
Núm. Est: 801-23-8238
Colaboraciones: 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << "\n" << endl;


    string movie;
    double ticket_adulto;
    double ticket_menor;



    cout << "Entre el nombre de su pelicula: " << endl;
    getline(cin, movie);
    cout << "\n";

    cout << "Entre la cantidad de tickets de adultos vendidos: " << endl;
    cin >> ticket_adulto;
    cout << "\n";

    cout << "Entre la cantidad de tickets de menores vendidos: " << endl;
    cin >> ticket_menor;
    cout << "\n\n\n";


    double adulto_total = ticket_adulto * 10.0;
    double menor_total = ticket_menor * 6.0;

    double gross_bop = adulto_total + menor_total;
    double net_porcentaje = gross_bop * 0.20;
    double net_bop = gross_bop - net_porcentaje;



   
    cout << left << setw(35) << "Nombre de pelicula: " << right << setw(6) << "\"" << movie << "\"" << endl;


    cout << left << setw(39) << "Tickets de adultos vendidos: " << right << setw(6) << ticket_adulto << endl;

    cout << left << setw(39) << "Tickets de menores vendidos: " << right << setw(6) << ticket_menor << endl;

    cout << fixed << setprecision(2);


    cout << left << setw(40) << "Beneficio bruto de taquilla: " << right << "$" << setw(8) << gross_bop << endl;

    cout << left << setw(39) << "Cantidad que gano el cine en ventas: " << right << " $" << setw(8) << net_porcentaje << endl;

    cout << left << setw(30) << "Cantidad generada para el distribuidor: " << right << "$" << setw(8) << net_bop << endl;

    


    return 0;
}
