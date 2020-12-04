#include"CarroN.h"

CarroN::CarroN()
{
    varMotorN = MotorN(250); 
}
void CarroN::setMotorN(MotorN elMotorN)
{
    varMotorN = elMotorN;
}
MotorN CarroN::getMotorN()
{
    return varMotorN;
}