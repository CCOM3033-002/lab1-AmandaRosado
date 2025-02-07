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

    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl;


    char movie;
    double ticket_adulto;
    double ticket_menor;



    cout << "Entre el nombre de su pelicula: " << endl;
    cin >> movie;
    

    cout << "Entre la cantidad de tickets de adultos vendidos: " << endl;
    cin >> ticket_adulto;
    

    cout << "Entre la cantidad de tickets de menores vendidos: " << endl;
    cin >> ticket_menor;



    double adulto_total = ticket_adulto * 10.0;
    double menor_total = ticket_menor * 6.0;
    double gbop = adulto_total + menor_total;
    double nbop = gbop - 20%;

    cout << "Esta es la cantidad generada en total por el cine ese dia: " << endl;
    cout << "$" << gbop << ".00" << endl;


    cout << "Esta es la cantidad generada para el distribuidor: " << endl;
    cout << "$" << nbop << ".00" << endl;

    return 0;
}
