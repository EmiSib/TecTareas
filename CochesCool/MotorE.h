#include"AtriCom.h"

#pragma once
class MotorE: public AtriCom
{
protected:
    int numBaterias;

public:
    MotorE();
    MotorE(int numBaterias);

    void setNumBaterias(int elNumBaterias);
    int getNumBaterias();
};