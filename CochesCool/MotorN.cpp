#include"MotorN.h"

MotorN::MotorN()
{
    numCilindros = 8;
}
MotorN::MotorN(int elNumCilindros)
{
    numCilindros = elNumCilindros;
}

void MotorN::setNumCilindros(int elNumCilindros)
{
    numCilindros = elNumCilindros;
}
int MotorN::getNumCilindros()
{
    return numCilindros;
}