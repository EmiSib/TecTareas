#include"MotorN.h"
#include"SeniorMotores.h"
#include"AtriCom.h"

#pragma once
class CarroN : public SeniorMotores, public AtriCom
{
protected:  
    MotorN varMotorN;

public:
    CarroN();
    void setMotorN(MotorN elMotorN);
    MotorN getMotorN();
};