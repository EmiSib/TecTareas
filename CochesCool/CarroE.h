#include"MotorE.h"
#include"SeniorMotores.h"
#include"AtriCom.h"

#pragma once
class CarroE : public SeniorMotores, public AtriCom
{
protected:  
    MotorE varMotorE;
public:
    CarroE();
    void setMotorE(MotorE elMotorE);
    MotorE getMotorE();
};
