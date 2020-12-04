#include<iostream>
#include"CarroE.h"
#include"CarroN.h"

using namespace std;

int main()
{

    cout << "--Coche bien eléctrico--" << endl;
    CarroE ele;
    ele.setMarca("Tesla");
    ele.setNombre("Tesla Model X");
    ele.setModelo(2015);
    ele.setVelocidadMax(525);

    cout<< "Marca del auto: " << ele.getMarca() << endl;
    cout<< "Nombre: " << ele.getNombre() << endl;
    cout<< "Año: " << ele.getModelo() << endl;
    cout<< "Velocidad Máxima: " << ele.getVelocidadMax() << " km/h" << endl;

    cout << endl;

    cout << "--Coche Normalito--" << endl;
    CarroN nor;
    nor.setMarca("Volkswagen");
    nor.setNombre("Beettle (Vocho)");
    nor.setModelo(2003);
    nor.setVelocidadMax(150);
    cout<< "Marca del auto: " << nor.getMarca()<< endl;
    cout<< "Nombre: " << nor.getNombre() << endl;
    cout<< "Año: " << nor.getModelo() << endl;
    cout<< "Velocidad Máxima: " << nor.getVelocidadMax() << " km/h" << endl;

}