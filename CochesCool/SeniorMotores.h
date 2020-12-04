#include<string>
using namespace std;

#pragma once
class SeniorMotores
{
protected:
    string marca;
    string nombre;
    int modelo;
    int velocidadMax;


public:
    void setMarca(string laMarca);
    void setNombre(string elNombre);
    void setModelo(int elModelo);
    void setVelocidadMax(int laVelocidadMax);
    string getMarca();
    string getNombre();
    int getModelo();
    int getVelocidadMax();
};