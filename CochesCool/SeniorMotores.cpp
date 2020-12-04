#include"SeniorMotores.h"

void SeniorMotores::setMarca(string laMarca)
{
    marca = laMarca;
}
string SeniorMotores::getMarca()
{
    return marca;
}
void SeniorMotores::setNombre(string elNombre)
{
    nombre = elNombre;
}
string SeniorMotores::getNombre()
{
    return nombre;
}

void SeniorMotores::setModelo(int elModelo)
{
    modelo = elModelo;
}
int SeniorMotores::getModelo()
{
    return modelo;
}
void SeniorMotores::setVelocidadMax(int laVelocidadMax)
{
    velocidadMax = laVelocidadMax;
}
int SeniorMotores::getVelocidadMax()
{
    return velocidadMax;
}