#include"MotorE.h"

MotorE::MotorE()
{
    numBaterias = 20;
}
MotorE::MotorE(int elNumBaterias)
{
    numBaterias = elNumBaterias;
}

void MotorE::setNumBaterias(int elNumBaterias)
{
    numBaterias = elNumBaterias;
}
int MotorE::getNumBaterias()
{
    return numBaterias;
}