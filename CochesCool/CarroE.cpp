#include"CarroE.h"

CarroE::CarroE()
{
    varMotorE= MotorE(200); 
}
void CarroE::setMotorE(MotorE elMotorE)
{
    varMotorE = elMotorE;
}
MotorE CarroE::getMotorE()
{
    return varMotorE;
}