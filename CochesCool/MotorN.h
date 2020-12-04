#include"AtriCom.h"

#pragma once
class MotorN : public AtriCom
{
protected:
    int numCilindros;

public:
    MotorN();
    MotorN(int numCilindros);

    void setNumCilindros(int elNumCilindros);
    int getNumCilindros();
};