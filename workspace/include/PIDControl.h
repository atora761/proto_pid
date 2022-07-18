#pragma once
#include <cstdint>
#include <string.h>
#include <memory>
#include <string>
#include "ev3api.h"
#include "system.h"
#include "Controller.h"
class PIDControl : public Controller
{
private:
    GAIN gain;
    float target;
    float stack_integral;
    int8 calc();
public:
    PIDControl();
    ~PIDControl();
    static PIDControl& getInstance()
    {
        static PIDControl PIDControl_;	// インスタンスの生成 
        return PIDControl_;
    }
};